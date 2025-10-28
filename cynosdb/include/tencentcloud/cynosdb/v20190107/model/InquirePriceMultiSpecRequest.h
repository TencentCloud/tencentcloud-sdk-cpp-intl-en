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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/GoodsSpec.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceMultiSpec request structure.
                */
                class InquirePriceMultiSpecRequest : public AbstractModel
                {
                public:
                    InquirePriceMultiSpecRequest();
                    ~InquirePriceMultiSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone. specifies the best practice for region provision.
                     * @return Zone Availability zone. specifies the best practice for region provision.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone. specifies the best practice for region provision.
                     * @param _zone Availability zone. specifies the best practice for region provision.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance purchase type. available values are: PREPAID, POSTPAID, SERVERLESS.
                     * @return InstancePayMode Instance purchase type. available values are: PREPAID, POSTPAID, SERVERLESS.
                     * 
                     */
                    std::string GetInstancePayMode() const;

                    /**
                     * 设置Instance purchase type. available values are: PREPAID, POSTPAID, SERVERLESS.
                     * @param _instancePayMode Instance purchase type. available values are: PREPAID, POSTPAID, SERVERLESS.
                     * 
                     */
                    void SetInstancePayMode(const std::string& _instancePayMode);

                    /**
                     * 判断参数 InstancePayMode 是否已赋值
                     * @return InstancePayMode 是否已赋值
                     * 
                     */
                    bool InstancePayModeHasBeenSet() const;

                    /**
                     * 获取Storage purchase type. available values are: PREPAID, POSTPAID.
                     * @return StoragePayMode Storage purchase type. available values are: PREPAID, POSTPAID.
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置Storage purchase type. available values are: PREPAID, POSTPAID.
                     * @param _storagePayMode Storage purchase type. available values are: PREPAID, POSTPAID.
                     * 
                     */
                    void SetStoragePayMode(const std::string& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取Specifies the product specification.
                     * @return GoodsSpecs Specifies the product specification.
                     * 
                     */
                    std::vector<GoodsSpec> GetGoodsSpecs() const;

                    /**
                     * 设置Specifies the product specification.
                     * @param _goodsSpecs Specifies the product specification.
                     * 
                     */
                    void SetGoodsSpecs(const std::vector<GoodsSpec>& _goodsSpecs);

                    /**
                     * 判断参数 GoodsSpecs 是否已赋值
                     * @return GoodsSpecs 是否已赋值
                     * 
                     */
                    bool GoodsSpecsHasBeenSet() const;

                private:

                    /**
                     * Availability zone. specifies the best practice for region provision.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance purchase type. available values are: PREPAID, POSTPAID, SERVERLESS.
                     */
                    std::string m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * Storage purchase type. available values are: PREPAID, POSTPAID.
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * Specifies the product specification.
                     */
                    std::vector<GoodsSpec> m_goodsSpecs;
                    bool m_goodsSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECREQUEST_H_
