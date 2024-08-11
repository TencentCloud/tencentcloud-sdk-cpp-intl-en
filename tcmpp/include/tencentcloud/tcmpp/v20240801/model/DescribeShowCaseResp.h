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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESHOWCASERESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESHOWCASERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/ShowCaseRelAppInfo.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Response of querying the trial version
                */
                class DescribeShowCaseResp : public AbstractModel
                {
                public:
                    DescribeShowCaseResp();
                    ~DescribeShowCaseResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPDesc(const std::string& _mNPDesc);

                    /**
                     * 判断参数 MNPDesc 是否已赋值
                     * @return MNPDesc 是否已赋值
                     * 
                     */
                    bool MNPDescHasBeenSet() const;

                    /**
                     * 获取Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersion Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersion Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPVersion(const std::string& _mNPVersion);

                    /**
                     * 判断参数 MNPVersion 是否已赋值
                     * @return MNPVersion 是否已赋值
                     * 
                     */
                    bool MNPVersionHasBeenSet() const;

                    /**
                     * 获取Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersionIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersionIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPVersionIntro(const std::string& _mNPVersionIntro);

                    /**
                     * 判断参数 MNPVersionIntro 是否已赋值
                     * @return MNPVersionIntro 是否已赋值
                     * 
                     */
                    bool MNPVersionIntroHasBeenSet() const;

                    /**
                     * 获取Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QRCodeUrl Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQRCodeUrl() const;

                    /**
                     * 设置Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qRCodeUrl Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQRCodeUrl(const std::string& _qRCodeUrl);

                    /**
                     * 判断参数 QRCodeUrl 是否已赋值
                     * @return QRCodeUrl 是否已赋值
                     * 
                     */
                    bool QRCodeUrlHasBeenSet() const;

                    /**
                     * 获取Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppList Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ShowCaseRelAppInfo> GetAppList() const;

                    /**
                     * 设置Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appList Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppList(const std::vector<ShowCaseRelAppInfo>& _appList);

                    /**
                     * 判断参数 AppList 是否已赋值
                     * @return AppList 是否已赋值
                     * 
                     */
                    bool AppListHasBeenSet() const;

                    /**
                     * 获取Path to the demo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TestEntrancePath Path to the demo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTestEntrancePath() const;

                    /**
                     * 设置Path to the demo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _testEntrancePath Path to the demo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTestEntrancePath(const std::string& _testEntrancePath);

                    /**
                     * 判断参数 TestEntrancePath 是否已赋值
                     * @return TestEntrancePath 是否已赋值
                     * 
                     */
                    bool TestEntrancePathHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qRCodeUrl;
                    bool m_qRCodeUrlHasBeenSet;

                    /**
                     * Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ShowCaseRelAppInfo> m_appList;
                    bool m_appListHasBeenSet;

                    /**
                     * Path to the demo
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_testEntrancePath;
                    bool m_testEntrancePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESHOWCASERESP_H_
