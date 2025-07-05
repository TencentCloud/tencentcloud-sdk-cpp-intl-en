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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_TRADETWONODE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_TRADETWONODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Secondary Industry Information
                */
                class TradeTwoNode : public AbstractModel
                {
                public:
                    TradeTwoNode();
                    ~TradeTwoNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Secondary industry id.
                     * @return Id Secondary industry id.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Secondary industry id.
                     * @param _id Secondary industry id.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Secondary industry name.
                     * @return Name Secondary industry name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Secondary industry name.
                     * @param _name Secondary industry name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Industry information.
                     * @return TradeInfo Industry information.
                     * 
                     */
                    std::string GetTradeInfo() const;

                    /**
                     * 设置Industry information.
                     * @param _tradeInfo Industry information.
                     * 
                     */
                    void SetTradeInfo(const std::string& _tradeInfo);

                    /**
                     * 判断参数 TradeInfo 是否已赋值
                     * @return TradeInfo 是否已赋值
                     * 
                     */
                    bool TradeInfoHasBeenSet() const;

                private:

                    /**
                     * Secondary industry id.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Secondary industry name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Industry information.
                     */
                    std::string m_tradeInfo;
                    bool m_tradeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_TRADETWONODE_H_
