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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_URLNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_URLNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Cloud Monitor alarm notification template - callback notification details
                */
                class URLNotice : public AbstractModel
                {
                public:
                    URLNotice();
                    ~URLNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Callback URL, which can contain up to 256 characters
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return URL Callback URL, which can contain up to 256 characters
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Callback URL, which can contain up to 256 characters
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param URL Callback URL, which can contain up to 256 characters
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取Whether verification is passed. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsValid Whether verification is passed. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsValid() const;

                    /**
                     * 设置Whether verification is passed. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsValid Whether verification is passed. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsValid(const int64_t& _isValid);

                    /**
                     * 判断参数 IsValid 是否已赋值
                     * @return IsValid 是否已赋值
                     */
                    bool IsValidHasBeenSet() const;

                    /**
                     * 获取Verification code
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ValidationCode Verification code
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetValidationCode() const;

                    /**
                     * 设置Verification code
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ValidationCode Verification code
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetValidationCode(const std::string& _validationCode);

                    /**
                     * 判断参数 ValidationCode 是否已赋值
                     * @return ValidationCode 是否已赋值
                     */
                    bool ValidationCodeHasBeenSet() const;

                    /**
                     * 获取Start time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StartTime Start time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param StartTime Start time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EndTime End time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EndTime End time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Callback URL, which can contain up to 256 characters
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * Whether verification is passed. Valid values: 0 (no), 1 (yes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isValid;
                    bool m_isValidHasBeenSet;

                    /**
                     * Verification code
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_validationCode;
                    bool m_validationCodeHasBeenSet;

                    /**
                     * Start time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the notification in seconds, which is calculated from 00:00:00.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_URLNOTICE_H_
