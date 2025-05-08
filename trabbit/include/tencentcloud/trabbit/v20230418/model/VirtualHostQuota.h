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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_VIRTUALHOSTQUOTA_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_VIRTUALHOSTQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * Virtual host quota.
                */
                class VirtualHostQuota : public AbstractModel
                {
                public:
                    VirtualHostQuota();
                    ~VirtualHostQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum number of virtual hosts.
                     * @return MaxVirtualHost Maximum number of virtual hosts.
                     * 
                     */
                    uint64_t GetMaxVirtualHost() const;

                    /**
                     * 设置Maximum number of virtual hosts.
                     * @param _maxVirtualHost Maximum number of virtual hosts.
                     * 
                     */
                    void SetMaxVirtualHost(const uint64_t& _maxVirtualHost);

                    /**
                     * 判断参数 MaxVirtualHost 是否已赋值
                     * @return MaxVirtualHost 是否已赋值
                     * 
                     */
                    bool MaxVirtualHostHasBeenSet() const;

                    /**
                     * 获取Number of already used virtual hosts.
                     * @return UsedVirtualHost Number of already used virtual hosts.
                     * 
                     */
                    uint64_t GetUsedVirtualHost() const;

                    /**
                     * 设置Number of already used virtual hosts.
                     * @param _usedVirtualHost Number of already used virtual hosts.
                     * 
                     */
                    void SetUsedVirtualHost(const uint64_t& _usedVirtualHost);

                    /**
                     * 判断参数 UsedVirtualHost 是否已赋值
                     * @return UsedVirtualHost 是否已赋值
                     * 
                     */
                    bool UsedVirtualHostHasBeenSet() const;

                private:

                    /**
                     * Maximum number of virtual hosts.
                     */
                    uint64_t m_maxVirtualHost;
                    bool m_maxVirtualHostHasBeenSet;

                    /**
                     * Number of already used virtual hosts.
                     */
                    uint64_t m_usedVirtualHost;
                    bool m_usedVirtualHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_VIRTUALHOSTQUOTA_H_
