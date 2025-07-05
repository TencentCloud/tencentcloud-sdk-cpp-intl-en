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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESSSSID_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESSSSID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Philippines SSSID Card
                */
                class PhilippinesSSSID : public AbstractModel
                {
                public:
                    PhilippinesSSSID();
                    ~PhilippinesSSSID() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseNumber License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 设置License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseNumber License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLicenseNumber(const std::string& _licenseNumber);

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullName Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullName Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _birthday Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Full name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHILIPPINESSSSID_H_
