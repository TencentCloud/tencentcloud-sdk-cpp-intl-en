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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONVERSIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONVERSIONINFO_H_

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
                * Streamlined SCF function version info
                */
                class SCFFunctionVersionInfo : public AbstractModel
                {
                public:
                    SCFFunctionVersionInfo();
                    ~SCFFunctionVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function version name
Parameter format: $LATEST or a digital version number, such as 1, 2, 3
                     * @return Version Function version name
Parameter format: $LATEST or a digital version number, such as 1, 2, 3
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Function version name
Parameter format: $LATEST or a digital version number, such as 1, 2, 3
                     * @param _version Function version name
Parameter format: $LATEST or a digital version number, such as 1, 2, 3
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
                     * 获取Version status. The current implementation returns the same value as the Version field.
                     * @return Status Version status. The current implementation returns the same value as the Version field.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Version status. The current implementation returns the same value as the Version field.
                     * @param _status Version status. The current implementation returns the same value as the Version field.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Function version name
Parameter format: $LATEST or a digital version number, such as 1, 2, 3
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Version status. The current implementation returns the same value as the Version field.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONVERSIONINFO_H_
