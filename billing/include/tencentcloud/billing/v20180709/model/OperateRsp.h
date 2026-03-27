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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_OPERATERSP_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_OPERATERSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Operate related resources return detail
                */
                class OperateRsp : public AbstractModel
                {
                public:
                    OperateRsp();
                    ~OperateRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation failure code at the instance dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Code Operation failure code at the instance dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Operation failure code at the instance dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _code Operation failure code at the instance dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Failure reason for operating related resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Failure reason for operating related resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Failure reason for operating related resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Failure reason for operating related resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Operation failure code at the instance dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Failure reason for operating related resources
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_OPERATERSP_H_
