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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBVERSIONDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBVERSIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Database Kernel Version Modification Task Information
                */
                class ModifyDbVersionData : public AbstractModel
                {
                public:
                    ModifyDbVersionData();
                    ~ModifyDbVersionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pre-modification version
                     * @return OldVersion pre-modification version
                     * 
                     */
                    std::string GetOldVersion() const;

                    /**
                     * 设置pre-modification version
                     * @param _oldVersion pre-modification version
                     * 
                     */
                    void SetOldVersion(const std::string& _oldVersion);

                    /**
                     * 判断参数 OldVersion 是否已赋值
                     * @return OldVersion 是否已赋值
                     * 
                     */
                    bool OldVersionHasBeenSet() const;

                    /**
                     * 获取Post-modification Version
                     * @return NewVersion Post-modification Version
                     * 
                     */
                    std::string GetNewVersion() const;

                    /**
                     * 设置Post-modification Version
                     * @param _newVersion Post-modification Version
                     * 
                     */
                    void SetNewVersion(const std::string& _newVersion);

                    /**
                     * 判断参数 NewVersion 是否已赋值
                     * @return NewVersion 是否已赋值
                     * 
                     */
                    bool NewVersionHasBeenSet() const;

                    /**
                     * 获取Upgrade Method
                     * @return UpgradeType Upgrade Method
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade Method
                     * @param _upgradeType Upgrade Method
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                private:

                    /**
                     * pre-modification version
                     */
                    std::string m_oldVersion;
                    bool m_oldVersionHasBeenSet;

                    /**
                     * Post-modification Version
                     */
                    std::string m_newVersion;
                    bool m_newVersionHasBeenSet;

                    /**
                     * Upgrade Method
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBVERSIONDATA_H_
