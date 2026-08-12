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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability repair item, specify a vulnerability/KB patch and its target host that needs to be repaired.
                */
                class VulFixItem : public AbstractModel
                {
                public:
                    VulFixItem();
                    ~VulFixItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID list of hosts requiring fixing<br>Input parameter limitation: Up to 1,000 instance IDs per single item</p>
                     * @return InstanceIds <p>Instance ID list of hosts requiring fixing<br>Input parameter limitation: Up to 1,000 instance IDs per single item</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Instance ID list of hosts requiring fixing<br>Input parameter limitation: Up to 1,000 instance IDs per single item</p>
                     * @param _instanceIds <p>Instance ID list of hosts requiring fixing<br>Input parameter limitation: Up to 1,000 instance IDs per single item</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability ID. Choose either VulId or KBId.</p>
                     * @return VulId <p>Vulnerability ID. Choose either VulId or KBId.</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>Vulnerability ID. Choose either VulId or KBId.</p>
                     * @param _vulId <p>Vulnerability ID. Choose either VulId or KBId.</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>Patch ID. Choose either VulId or KBId.</p>
                     * @return KBId <p>Patch ID. Choose either VulId or KBId.</p>
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置<p>Patch ID. Choose either VulId or KBId.</p>
                     * @param _kBId <p>Patch ID. Choose either VulId or KBId.</p>
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID list of hosts requiring fixing<br>Input parameter limitation: Up to 1,000 instance IDs per single item</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Vulnerability ID. Choose either VulId or KBId.</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>Patch ID. Choose either VulId or KBId.</p>
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXITEM_H_
