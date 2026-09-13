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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DIGITALORDER_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DIGITALORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the digital order
                */
                class DigitalOrder : public AbstractModel
                {
                public:
                    DigitalOrder();
                    ~DigitalOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The name of the asset</p>
                     * @return DigitalAsset <p>The name of the asset</p>
                     * 
                     */
                    std::string GetDigitalAsset() const;

                    /**
                     * 设置<p>The name of the asset</p>
                     * @param _digitalAsset <p>The name of the asset</p>
                     * 
                     */
                    void SetDigitalAsset(const std::string& _digitalAsset);

                    /**
                     * 判断参数 DigitalAsset 是否已赋值
                     * @return DigitalAsset 是否已赋值
                     * 
                     */
                    bool DigitalAssetHasBeenSet() const;

                    /**
                     * 获取<p>The type of the asset</p><p>Enumeration value:</p><ul><li>coin</li><li>commodity</li><li>crypto</li><li>fiat</li><li>token</li><li>stock</li><li>bond</li></ul>
                     * @return AssetType <p>The type of the asset</p><p>Enumeration value:</p><ul><li>coin</li><li>commodity</li><li>crypto</li><li>fiat</li><li>token</li><li>stock</li><li>bond</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>The type of the asset</p><p>Enumeration value:</p><ul><li>coin</li><li>commodity</li><li>crypto</li><li>fiat</li><li>token</li><li>stock</li><li>bond</li></ul>
                     * @param _assetType <p>The type of the asset</p><p>Enumeration value:</p><ul><li>coin</li><li>commodity</li><li>crypto</li><li>fiat</li><li>token</li><li>stock</li><li>bond</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>The type of trade being made</p><p>Enumeration value:</p><ul><li>limit: Limit order</li><li>market: Market order</li><li>stop_limit: Stop-limit order</li><li>stop_loss: Stop-loss order</li><li>take_profit: Take-profit order</li><li>take_profit_limit: Take-profit limit order</li></ul>
                     * @return OrderType <p>The type of trade being made</p><p>Enumeration value:</p><ul><li>limit: Limit order</li><li>market: Market order</li><li>stop_limit: Stop-limit order</li><li>stop_loss: Stop-loss order</li><li>take_profit: Take-profit order</li><li>take_profit_limit: Take-profit limit order</li></ul>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>The type of trade being made</p><p>Enumeration value:</p><ul><li>limit: Limit order</li><li>market: Market order</li><li>stop_limit: Stop-limit order</li><li>stop_loss: Stop-loss order</li><li>take_profit: Take-profit order</li><li>take_profit_limit: Take-profit limit order</li></ul>
                     * @param _orderType <p>The type of trade being made</p><p>Enumeration value:</p><ul><li>limit: Limit order</li><li>market: Market order</li><li>stop_limit: Stop-limit order</li><li>stop_loss: Stop-loss order</li><li>take_profit: Take-profit order</li><li>take_profit_limit: Take-profit limit order</li></ul>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>The quantity of the digital asset</p>
                     * @return Volume <p>The quantity of the digital asset</p>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置<p>The quantity of the digital asset</p>
                     * @param _volume <p>The quantity of the digital asset</p>
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * <p>The name of the asset</p>
                     */
                    std::string m_digitalAsset;
                    bool m_digitalAssetHasBeenSet;

                    /**
                     * <p>The type of the asset</p><p>Enumeration value:</p><ul><li>coin</li><li>commodity</li><li>crypto</li><li>fiat</li><li>token</li><li>stock</li><li>bond</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>The type of trade being made</p><p>Enumeration value:</p><ul><li>limit: Limit order</li><li>market: Market order</li><li>stop_limit: Stop-limit order</li><li>stop_loss: Stop-loss order</li><li>take_profit: Take-profit order</li><li>take_profit_limit: Take-profit limit order</li></ul>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>The quantity of the digital asset</p>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DIGITALORDER_H_
