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

#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/core/utils/Utils.h>

using namespace TencentCloud;

AsyncCallerContext::AsyncCallerContext() :
    m_uuid(Utils::GenerateUuid())
{
}

AsyncCallerContext::AsyncCallerContext(const std::string &uuid) :
    m_uuid(uuid)
{
}

AsyncCallerContext::~AsyncCallerContext()
{
}

std::string AsyncCallerContext::GetUuid()const
{
    return m_uuid;
}

void AsyncCallerContext::SetUuid(const std::string &uuid)
{
    m_uuid = uuid;
}
