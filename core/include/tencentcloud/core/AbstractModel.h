/*
 * Copyright (c) 2017-2019 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CORE_ABSTRACTMODEL_H_
#define TENCENTCLOUD_CORE_ABSTRACTMODEL_H_

#include <string>
#include "Outcome.h"
#include "Error.h"

namespace TencentCloud
{
    typedef Outcome<Core::Error, bool> CoreInternalOutcome;
    class AbstractModel
    {
    public:
        AbstractModel();
        ~AbstractModel();
        std::string GetRequestId() const;
        virtual std::string ToJsonString() const;

    protected:
        void SetRequestId(const std::string &requestId);

    private:
        std::string m_requestId;
    };
}

#endif // !TENCENTCLOUD_CORE_ABSTRACTMODEL_H_
