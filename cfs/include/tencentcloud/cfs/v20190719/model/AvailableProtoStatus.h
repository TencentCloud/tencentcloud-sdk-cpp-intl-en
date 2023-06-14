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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEPROTOSTATUS_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEPROTOSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Versioning - protocol details

                */
                class AvailableProtoStatus : public AbstractModel
                {
                public:
                    AvailableProtoStatus();
                    ~AvailableProtoStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sale status. Valid values: sale_out (sold out), saling (purchasable), no_saling (non-purchasable)
                     * @return SaleStatus Sale status. Valid values: sale_out (sold out), saling (purchasable), no_saling (non-purchasable)
                     * 
                     */
                    std::string GetSaleStatus() const;

                    /**
                     * 设置Sale status. Valid values: sale_out (sold out), saling (purchasable), no_saling (non-purchasable)
                     * @param _saleStatus Sale status. Valid values: sale_out (sold out), saling (purchasable), no_saling (non-purchasable)
                     * 
                     */
                    void SetSaleStatus(const std::string& _saleStatus);

                    /**
                     * 判断参数 SaleStatus 是否已赋值
                     * @return SaleStatus 是否已赋值
                     * 
                     */
                    bool SaleStatusHasBeenSet() const;

                    /**
                     * 获取Protocol type. Valid values: NFS, CIFS
                     * @return Protocol Protocol type. Valid values: NFS, CIFS
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type. Valid values: NFS, CIFS
                     * @param _protocol Protocol type. Valid values: NFS, CIFS
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Sale status. Valid values: sale_out (sold out), saling (purchasable), no_saling (non-purchasable)
                     */
                    std::string m_saleStatus;
                    bool m_saleStatusHasBeenSet;

                    /**
                     * Protocol type. Valid values: NFS, CIFS
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEPROTOSTATUS_H_
