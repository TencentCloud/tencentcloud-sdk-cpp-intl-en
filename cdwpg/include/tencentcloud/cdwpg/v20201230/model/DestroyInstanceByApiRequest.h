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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESTROYINSTANCEBYAPIREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESTROYINSTANCEBYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DestroyInstanceByApi request structure.
                */
                class DestroyInstanceByApiRequest : public AbstractModel
                {
                public:
                    DestroyInstanceByApiRequest();
                    ~DestroyInstanceByApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance id. Example: "cdwpg-xxxx".
                     * @return InstanceId Instance id. Example: "cdwpg-xxxx".
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance id. Example: "cdwpg-xxxx".
                     * @param _instanceId Instance id. Example: "cdwpg-xxxx".
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
                     * Instance id. Example: "cdwpg-xxxx".
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESTROYINSTANCEBYAPIREQUEST_H_
