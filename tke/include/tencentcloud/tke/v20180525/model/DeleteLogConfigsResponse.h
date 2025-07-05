/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteLogConfigs response structure.
                */
                class DeleteLogConfigsResponse : public AbstractModel
                {
                public:
                    DeleteLogConfigsResponse();
                    ~DeleteLogConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returns the error causes when encountering an error in deleting a collection rule
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Message Returns the error causes when encountering an error in deleting a collection rule
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Returns the error causes when encountering an error in deleting a collection rule
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSRESPONSE_H_
