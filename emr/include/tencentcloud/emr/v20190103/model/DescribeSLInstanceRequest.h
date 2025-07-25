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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeSLInstance request structure.
                */
                class DescribeSLInstanceRequest : public AbstractModel
                {
                public:
                    DescribeSLInstanceRequest();
                    ~DescribeSLInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance unique identifier (string).
                     * @return InstanceId Instance unique identifier (string).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance unique identifier (string).
                     * @param _instanceId Instance unique identifier (string).
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
                     * Instance unique identifier (string).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCEREQUEST_H_
