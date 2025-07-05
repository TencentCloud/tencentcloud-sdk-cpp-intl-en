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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_LICENSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_LICENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * License list viewed by authorization
                */
                class License : public AbstractModel
                {
                public:
                    License();
                    ~License() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of licenses of this type.
                     * @return Count The number of licenses of this type.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of licenses of this type.
                     * @param _count The number of licenses of this type.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取License status. 0: unbound; 1: bound; 2: service suspension; 3: refund.
                     * @return Status License status. 0: unbound; 1: bound; 2: service suspension; 3: refund.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置License status. 0: unbound; 1: bound; 2: service suspension; 3: refund.
                     * @param _status License status. 0: unbound; 1: bound; 2: service suspension; 3: refund.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Expiration timestamp: s.
                     * @return ExpireTime Expiration timestamp: s.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration timestamp: s.
                     * @param _expireTime Expiration timestamp: s.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Service duration: s.
                     * @return Duration Service duration: s.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Service duration: s.
                     * @param _duration Service duration: s.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Remaining days: days.
                     * @return RemainDay Remaining days: days.
                     * 
                     */
                    int64_t GetRemainDay() const;

                    /**
                     * 设置Remaining days: days.
                     * @param _remainDay Remaining days: days.
                     * 
                     */
                    void SetRemainDay(const int64_t& _remainDay);

                    /**
                     * 判断参数 RemainDay 是否已赋值
                     * @return RemainDay 是否已赋值
                     * 
                     */
                    bool RemainDayHasBeenSet() const;

                    /**
                     * 获取The list of license ids of this type.
                     * @return LicenseIds The list of license ids of this type.
                     * 
                     */
                    std::vector<std::string> GetLicenseIds() const;

                    /**
                     * 设置The list of license ids of this type.
                     * @param _licenseIds The list of license ids of this type.
                     * 
                     */
                    void SetLicenseIds(const std::vector<std::string>& _licenseIds);

                    /**
                     * 判断参数 LicenseIds 是否已赋值
                     * @return LicenseIds 是否已赋值
                     * 
                     */
                    bool LicenseIdsHasBeenSet() const;

                private:

                    /**
                     * The number of licenses of this type.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * License status. 0: unbound; 1: bound; 2: service suspension; 3: refund.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Expiration timestamp: s.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Service duration: s.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Remaining days: days.
                     */
                    int64_t m_remainDay;
                    bool m_remainDayHasBeenSet;

                    /**
                     * The list of license ids of this type.
                     */
                    std::vector<std::string> m_licenseIds;
                    bool m_licenseIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_LICENSE_H_
