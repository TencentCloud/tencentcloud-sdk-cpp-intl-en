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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AscriptionInfo.h>
#include <tencentcloud/teo/v20220901/model/FileAscriptionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The site verification information
                */
                class Identification : public AbstractModel
                {
                public:
                    Identification();
                    ~Identification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site name.
                     * @return ZoneName The site name.
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param ZoneName The site name.
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取The verification status. Values:
<li>`pending`: The verification is ongoing.</li>
<li>`finished`: The verification completed.</li>
                     * @return Status The verification status. Values:
<li>`pending`: The verification is ongoing.</li>
<li>`finished`: The verification completed.</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The verification status. Values:
<li>`pending`: The verification is ongoing.</li>
<li>`finished`: The verification completed.</li>
                     * @param Status The verification status. Values:
<li>`pending`: The verification is ongoing.</li>
<li>`finished`: The verification completed.</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Details of the DNS record.
                     * @return Ascription Details of the DNS record.
                     */
                    AscriptionInfo GetAscription() const;

                    /**
                     * 设置Details of the DNS record.
                     * @param Ascription Details of the DNS record.
                     */
                    void SetAscription(const AscriptionInfo& _ascription);

                    /**
                     * 判断参数 Ascription 是否已赋值
                     * @return Ascription 是否已赋值
                     */
                    bool AscriptionHasBeenSet() const;

                    /**
                     * 获取The NS record of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalNameServers The NS record of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置The NS record of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OriginalNameServers The NS record of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取Details of the verification file.
                     * @return FileAscription Details of the verification file.
                     */
                    FileAscriptionInfo GetFileAscription() const;

                    /**
                     * 设置Details of the verification file.
                     * @param FileAscription Details of the verification file.
                     */
                    void SetFileAscription(const FileAscriptionInfo& _fileAscription);

                    /**
                     * 判断参数 FileAscription 是否已赋值
                     * @return FileAscription 是否已赋值
                     */
                    bool FileAscriptionHasBeenSet() const;

                private:

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The verification status. Values:
<li>`pending`: The verification is ongoing.</li>
<li>`finished`: The verification completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Details of the DNS record.
                     */
                    AscriptionInfo m_ascription;
                    bool m_ascriptionHasBeenSet;

                    /**
                     * The NS record of the domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * Details of the verification file.
                     */
                    FileAscriptionInfo m_fileAscription;
                    bool m_fileAscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_
