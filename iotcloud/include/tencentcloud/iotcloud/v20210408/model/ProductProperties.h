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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PRODUCTPROPERTIES_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PRODUCTPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * Product properties
                */
                class ProductProperties : public AbstractModel
                {
                public:
                    ProductProperties();
                    ~ProductProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product description
                     * @return ProductDescription Product description
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置Product description
                     * @param ProductDescription Product description
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取Authentication type. `1` (default): certificate; `2`: signature
                     * @return EncryptionType Authentication type. `1` (default): certificate; `2`: signature
                     */
                    std::string GetEncryptionType() const;

                    /**
                     * 设置Authentication type. `1` (default): certificate; `2`: signature
                     * @param EncryptionType Authentication type. `1` (default): certificate; `2`: signature
                     */
                    void SetEncryptionType(const std::string& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     */
                    bool EncryptionTypeHasBeenSet() const;

                    /**
                     * 获取Product region. Valid value: `gz` (Guangzhou)
                     * @return Region Product region. Valid value: `gz` (Guangzhou)
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Product region. Valid value: `gz` (Guangzhou)
                     * @param Region Product region. Valid value: `gz` (Guangzhou)
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Product type. Valid values:
`0` (default): general; `2`: NB-IoT; `3`: LoRa gateway; `4`: LoRa; `5`: general gateway
                     * @return ProductType Product type. Valid values:
`0` (default): general; `2`: NB-IoT; `3`: LoRa gateway; `4`: LoRa; `5`: general gateway
                     */
                    uint64_t GetProductType() const;

                    /**
                     * 设置Product type. Valid values:
`0` (default): general; `2`: NB-IoT; `3`: LoRa gateway; `4`: LoRa; `5`: general gateway
                     * @param ProductType Product type. Valid values:
`0` (default): general; `2`: NB-IoT; `3`: LoRa gateway; `4`: LoRa; `5`: general gateway
                     */
                    void SetProductType(const uint64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取Data format. Valid values: `json` (default), `custom`
                     * @return Format Data format. Valid values: `json` (default), `custom`
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Data format. Valid values: `json` (default), `custom`
                     * @param Format Data format. Valid values: `json` (default), `custom`
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Platform of the product. Default value: `0`
                     * @return Platform Platform of the product. Default value: `0`
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Platform of the product. Default value: `0`
                     * @param Platform Platform of the product. Default value: `0`
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取AppEUI at the LoRa product operator, required only for LoRa products
                     * @return Appeui AppEUI at the LoRa product operator, required only for LoRa products
                     */
                    std::string GetAppeui() const;

                    /**
                     * 设置AppEUI at the LoRa product operator, required only for LoRa products
                     * @param Appeui AppEUI at the LoRa product operator, required only for LoRa products
                     */
                    void SetAppeui(const std::string& _appeui);

                    /**
                     * 判断参数 Appeui 是否已赋值
                     * @return Appeui 是否已赋值
                     */
                    bool AppeuiHasBeenSet() const;

                    /**
                     * 获取ID of the Thing Specification Language (TSL) model bound to the product. `-1` means no models are bound.
                     * @return ModelId ID of the Thing Specification Language (TSL) model bound to the product. `-1` means no models are bound.
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置ID of the Thing Specification Language (TSL) model bound to the product. `-1` means no models are bound.
                     * @param ModelId ID of the Thing Specification Language (TSL) model bound to the product. `-1` means no models are bound.
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取Name of the TSL model bound to the product
                     * @return ModelName Name of the TSL model bound to the product
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Name of the TSL model bound to the product
                     * @param ModelName Name of the TSL model bound to the product
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Product key, which is specific to suite products
                     * @return ProductKey Product key, which is specific to suite products
                     */
                    std::string GetProductKey() const;

                    /**
                     * 设置Product key, which is specific to suite products
                     * @param ProductKey Product key, which is specific to suite products
                     */
                    void SetProductKey(const std::string& _productKey);

                    /**
                     * 判断参数 ProductKey 是否已赋值
                     * @return ProductKey 是否已赋值
                     */
                    bool ProductKeyHasBeenSet() const;

                    /**
                     * 获取Dynamic registration type. `0`: disable; `1`: preset device names; `2`: generate device names dynamically
                     * @return RegisterType Dynamic registration type. `0`: disable; `1`: preset device names; `2`: generate device names dynamically
                     */
                    uint64_t GetRegisterType() const;

                    /**
                     * 设置Dynamic registration type. `0`: disable; `1`: preset device names; `2`: generate device names dynamically
                     * @param RegisterType Dynamic registration type. `0`: disable; `1`: preset device names; `2`: generate device names dynamically
                     */
                    void SetRegisterType(const uint64_t& _registerType);

                    /**
                     * 判断参数 RegisterType 是否已赋值
                     * @return RegisterType 是否已赋值
                     */
                    bool RegisterTypeHasBeenSet() const;

                    /**
                     * 获取Dynamic registration product key
                     * @return ProductSecret Dynamic registration product key
                     */
                    std::string GetProductSecret() const;

                    /**
                     * 设置Dynamic registration product key
                     * @param ProductSecret Dynamic registration product key
                     */
                    void SetProductSecret(const std::string& _productSecret);

                    /**
                     * 判断参数 ProductSecret 是否已赋值
                     * @return ProductSecret 是否已赋值
                     */
                    bool ProductSecretHasBeenSet() const;

                    /**
                     * 获取The maximum number of devices that can be dynamically created when `RegisterType` is set to `2`
                     * @return RegisterLimit The maximum number of devices that can be dynamically created when `RegisterType` is set to `2`
                     */
                    uint64_t GetRegisterLimit() const;

                    /**
                     * 设置The maximum number of devices that can be dynamically created when `RegisterType` is set to `2`
                     * @param RegisterLimit The maximum number of devices that can be dynamically created when `RegisterType` is set to `2`
                     */
                    void SetRegisterLimit(const uint64_t& _registerLimit);

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     */
                    bool RegisterLimitHasBeenSet() const;

                    /**
                     * 获取Original product ID of a transferred product. This parameter is empty for products that are not transferred.
                     * @return OriginProductId Original product ID of a transferred product. This parameter is empty for products that are not transferred.
                     */
                    std::string GetOriginProductId() const;

                    /**
                     * 设置Original product ID of a transferred product. This parameter is empty for products that are not transferred.
                     * @param OriginProductId Original product ID of a transferred product. This parameter is empty for products that are not transferred.
                     */
                    void SetOriginProductId(const std::string& _originProductId);

                    /**
                     * 判断参数 OriginProductId 是否已赋值
                     * @return OriginProductId 是否已赋值
                     */
                    bool OriginProductIdHasBeenSet() const;

                    /**
                     * 获取Private CA certificate name
                     * @return PrivateCAName Private CA certificate name
                     */
                    std::string GetPrivateCAName() const;

                    /**
                     * 设置Private CA certificate name
                     * @param PrivateCAName Private CA certificate name
                     */
                    void SetPrivateCAName(const std::string& _privateCAName);

                    /**
                     * 判断参数 PrivateCAName 是否已赋值
                     * @return PrivateCAName 是否已赋值
                     */
                    bool PrivateCANameHasBeenSet() const;

                    /**
                     * 获取Original user ID of a transferred product. This parameter is empty for products that are not transferred.
                     * @return OriginUserId Original user ID of a transferred product. This parameter is empty for products that are not transferred.
                     */
                    uint64_t GetOriginUserId() const;

                    /**
                     * 设置Original user ID of a transferred product. This parameter is empty for products that are not transferred.
                     * @param OriginUserId Original user ID of a transferred product. This parameter is empty for products that are not transferred.
                     */
                    void SetOriginUserId(const uint64_t& _originUserId);

                    /**
                     * 判断参数 OriginUserId 是否已赋值
                     * @return OriginUserId 是否已赋值
                     */
                    bool OriginUserIdHasBeenSet() const;

                private:

                    /**
                     * Product description
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * Authentication type. `1` (default): certificate; `2`: signature
                     */
                    std::string m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * Product region. Valid value: `gz` (Guangzhou)
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Product type. Valid values:
`0` (default): general; `2`: NB-IoT; `3`: LoRa gateway; `4`: LoRa; `5`: general gateway
                     */
                    uint64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * Data format. Valid values: `json` (default), `custom`
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Platform of the product. Default value: `0`
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * AppEUI at the LoRa product operator, required only for LoRa products
                     */
                    std::string m_appeui;
                    bool m_appeuiHasBeenSet;

                    /**
                     * ID of the Thing Specification Language (TSL) model bound to the product. `-1` means no models are bound.
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * Name of the TSL model bound to the product
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Product key, which is specific to suite products
                     */
                    std::string m_productKey;
                    bool m_productKeyHasBeenSet;

                    /**
                     * Dynamic registration type. `0`: disable; `1`: preset device names; `2`: generate device names dynamically
                     */
                    uint64_t m_registerType;
                    bool m_registerTypeHasBeenSet;

                    /**
                     * Dynamic registration product key
                     */
                    std::string m_productSecret;
                    bool m_productSecretHasBeenSet;

                    /**
                     * The maximum number of devices that can be dynamically created when `RegisterType` is set to `2`
                     */
                    uint64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                    /**
                     * Original product ID of a transferred product. This parameter is empty for products that are not transferred.
                     */
                    std::string m_originProductId;
                    bool m_originProductIdHasBeenSet;

                    /**
                     * Private CA certificate name
                     */
                    std::string m_privateCAName;
                    bool m_privateCANameHasBeenSet;

                    /**
                     * Original user ID of a transferred product. This parameter is empty for products that are not transferred.
                     */
                    uint64_t m_originUserId;
                    bool m_originUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PRODUCTPROPERTIES_H_
