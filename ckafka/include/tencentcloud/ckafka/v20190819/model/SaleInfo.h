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
                * Sales information of Standard Edition
                */
                class SaleInfo : public AbstractModel
                {
                public:
                    SaleInfo();
                    ~SaleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Manually set flag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Flag Manually set flag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置Manually set flag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _flag Manually set flag.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取CKafka version (v1.1.1/2.4.2/0.10.2）
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Version CKafka version (v1.1.1/2.4.2/0.10.2）
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置CKafka version (v1.1.1/2.4.2/0.10.2）
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _version CKafka version (v1.1.1/2.4.2/0.10.2）
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether it is Pro Edition or Standard Edition.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Platform Whether it is Pro Edition or Standard Edition.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Whether it is Pro Edition or Standard Edition.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _platform Whether it is Pro Edition or Standard Edition.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether it has been sold out. `true`: sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SoldOut Whether it has been sold out. `true`: sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSoldOut() const;

                    /**
                     * 设置Whether it has been sold out. `true`: sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _soldOut Whether it has been sold out. `true`: sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Manually set flag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * CKafka version (v1.1.1/2.4.2/0.10.2）
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Whether it is Pro Edition or Standard Edition.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Whether it has been sold out. `true`: sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_soldOut;
                    bool m_soldOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_
