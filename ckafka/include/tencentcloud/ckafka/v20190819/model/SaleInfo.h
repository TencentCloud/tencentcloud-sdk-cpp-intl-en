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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Sales information of versions.
                */
                class SaleInfo : public AbstractModel
                {
                public:
                    SaleInfo();
                    ~SaleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The manually configured flag. valid values: true (sold-out), false (available).
                     * @return Flag The manually configured flag. valid values: true (sold-out), false (available).
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置The manually configured flag. valid values: true (sold-out), false (available).
                     * @param _flag The manually configured flag. valid values: true (sold-out), false (available).
                     * 
                     */
                    void SetFlag(const bool& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取Specifies the ckafka version number (1.1.1/2.4.2/0.10.2).
                     * @return Version Specifies the ckafka version number (1.1.1/2.4.2/0.10.2).
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Specifies the ckafka version number (1.1.1/2.4.2/0.10.2).
                     * @param _version Specifies the ckafka version number (1.1.1/2.4.2/0.10.2).
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Pro edition, standard version flag.
                     * @return Platform Pro edition, standard version flag.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Pro edition, standard version flag.
                     * @param _platform Pro edition, standard version flag.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Specifies whether the item is sold-out. valid values: true (sold-out).
                     * @return SoldOut Specifies whether the item is sold-out. valid values: true (sold-out).
                     * 
                     */
                    bool GetSoldOut() const;

                    /**
                     * 设置Specifies whether the item is sold-out. valid values: true (sold-out).
                     * @param _soldOut Specifies whether the item is sold-out. valid values: true (sold-out).
                     * 
                     */
                    void SetSoldOut(const bool& _soldOut);

                    /**
                     * 判断参数 SoldOut 是否已赋值
                     * @return SoldOut 是否已赋值
                     * 
                     */
                    bool SoldOutHasBeenSet() const;

                private:

                    /**
                     * The manually configured flag. valid values: true (sold-out), false (available).
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Specifies the ckafka version number (1.1.1/2.4.2/0.10.2).
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Pro edition, standard version flag.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Specifies whether the item is sold-out. valid values: true (sold-out).
                     */
                    bool m_soldOut;
                    bool m_soldOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_
