/** @file

  AcceptCont

  @section license License

  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 */

#ifndef I_AcceptCont_H_
#define I_AcceptCont_H_
#include "I_Net.h"
#include "I_VConnection.h"

class AcceptCont: public Continuation
{
public:
  AcceptCont();
  ~AcceptCont();

  //
  // Virtual function allows creation of an SSLNetAccept
  // or NetAccept transparent to NetProcessor.
  //
  // This function should return a pointer
  // of NetAccept or its subclass.
  //
  virtual void *createNetAccept();

private:
  virtual int mainEvent(int event, void * netvc) = 0;
};

#endif /* I_AcceptCont_H_ */
