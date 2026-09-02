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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERDETAIL_H_

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
                * Order detail
                */
                class OrderDetail : public AbstractModel
                {
                public:
                    OrderDetail();
                    ~OrderDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Resource ID</p>
                     * @return ResourceID <p>Resource ID</p>
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置<p>Resource ID</p>
                     * @param _resourceID <p>Resource ID</p>
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取<p>Billing item</p>
                     * @return InquireKey <p>Billing item</p>
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置<p>Billing item</p>
                     * @param _inquireKey <p>Billing item</p>
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取<p>Order status</p><ul><li>1: normal</li><li>2: isolation period</li><li>3: terminated</li></ul>
                     * @return Status <p>Order status</p><ul><li>1: normal</li><li>2: isolation period</li><li>3: terminated</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Order status</p><ul><li>1: normal</li><li>2: isolation period</li><li>3: terminated</li></ul>
                     * @param _status <p>Order status</p><ul><li>1: normal</li><li>2: isolation period</li><li>3: terminated</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Order type</p>
                     * @return SourceType <p>Order type</p>
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置<p>Order type</p>
                     * @param _sourceType <p>Order type</p>
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Resource ID</p>
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * <p>Billing item</p>
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * <p>Order status</p><ul><li>1: normal</li><li>2: isolation period</li><li>3: terminated</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Order type</p>
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERDETAIL_H_
