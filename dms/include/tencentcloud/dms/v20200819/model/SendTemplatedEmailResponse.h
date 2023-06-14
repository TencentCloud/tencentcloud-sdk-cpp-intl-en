/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DMS_V20200819_MODEL_SENDTEMPLATEDEMAILRESPONSE_H_
#define TENCENTCLOUD_DMS_V20200819_MODEL_SENDTEMPLATEDEMAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dms
    {
        namespace V20200819
        {
            namespace Model
            {
                /**
                * SendTemplatedEmail response structure.
                */
                class SendTemplatedEmailResponse : public AbstractModel
                {
                public:
                    SendTemplatedEmailResponse();
                    ~SendTemplatedEmailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The result of creating a template email task
                     * @return Result The result of creating a template email task
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * The result of creating a template email task
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DMS_V20200819_MODEL_SENDTEMPLATEDEMAILRESPONSE_H_
