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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * Package message statistics response packet
                */
                class SmsPackagesStatistics : public AbstractModel
                {
                public:
                    SmsPackagesStatistics();
                    ~SmsPackagesStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Package creation time in standard time format, such as 2019-10-08 17:18:37.
                     * @return PackageCreateTime Package creation time in standard time format, such as 2019-10-08 17:18:37.
                     * 
                     */
                    std::string GetPackageCreateTime() const;

                    /**
                     * 设置Package creation time in standard time format, such as 2019-10-08 17:18:37.
                     * @param _packageCreateTime Package creation time in standard time format, such as 2019-10-08 17:18:37.
                     * 
                     */
                    void SetPackageCreateTime(const std::string& _packageCreateTime);

                    /**
                     * 判断参数 PackageCreateTime 是否已赋值
                     * @return PackageCreateTime 是否已赋值
                     * 
                     */
                    bool PackageCreateTimeHasBeenSet() const;

                    /**
                     * 获取Package creation time in seconds in the format of UNIX timestamp.
                     * @return PackageCreateUnixTime Package creation time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetPackageCreateUnixTime() const;

                    /**
                     * 设置Package creation time in seconds in the format of UNIX timestamp.
                     * @param _packageCreateUnixTime Package creation time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetPackageCreateUnixTime(const uint64_t& _packageCreateUnixTime);

                    /**
                     * 判断参数 PackageCreateUnixTime 是否已赋值
                     * @return PackageCreateUnixTime 是否已赋值
                     * 
                     */
                    bool PackageCreateUnixTimeHasBeenSet() const;

                    /**
                     * 获取Package effective time in standard time format, such as 2019-10-08 17:18:37.
                     * @return PackageEffectiveTime Package effective time in standard time format, such as 2019-10-08 17:18:37.
                     * 
                     */
                    std::string GetPackageEffectiveTime() const;

                    /**
                     * 设置Package effective time in standard time format, such as 2019-10-08 17:18:37.
                     * @param _packageEffectiveTime Package effective time in standard time format, such as 2019-10-08 17:18:37.
                     * 
                     */
                    void SetPackageEffectiveTime(const std::string& _packageEffectiveTime);

                    /**
                     * 判断参数 PackageEffectiveTime 是否已赋值
                     * @return PackageEffectiveTime 是否已赋值
                     * 
                     */
                    bool PackageEffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Package effective time in seconds in the format of UNIX timestamp.
                     * @return PackageEffectiveUnixTime Package effective time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetPackageEffectiveUnixTime() const;

                    /**
                     * 设置Package effective time in seconds in the format of UNIX timestamp.
                     * @param _packageEffectiveUnixTime Package effective time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetPackageEffectiveUnixTime(const uint64_t& _packageEffectiveUnixTime);

                    /**
                     * 判断参数 PackageEffectiveUnixTime 是否已赋值
                     * @return PackageEffectiveUnixTime 是否已赋值
                     * 
                     */
                    bool PackageEffectiveUnixTimeHasBeenSet() const;

                    /**
                     * 获取Package expiration time in standard time format, such as 2019-10-08 17:18:37.
                     * @return PackageExpiredTime Package expiration time in standard time format, such as 2019-10-08 17:18:37.
                     * 
                     */
                    std::string GetPackageExpiredTime() const;

                    /**
                     * 设置Package expiration time in standard time format, such as 2019-10-08 17:18:37.
                     * @param _packageExpiredTime Package expiration time in standard time format, such as 2019-10-08 17:18:37.
                     * 
                     */
                    void SetPackageExpiredTime(const std::string& _packageExpiredTime);

                    /**
                     * 判断参数 PackageExpiredTime 是否已赋值
                     * @return PackageExpiredTime 是否已赋值
                     * 
                     */
                    bool PackageExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Package expiration time in seconds in the format of UNIX timestamp.
                     * @return PackageExpiredUnixTime Package expiration time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    uint64_t GetPackageExpiredUnixTime() const;

                    /**
                     * 设置Package expiration time in seconds in the format of UNIX timestamp.
                     * @param _packageExpiredUnixTime Package expiration time in seconds in the format of UNIX timestamp.
                     * 
                     */
                    void SetPackageExpiredUnixTime(const uint64_t& _packageExpiredUnixTime);

                    /**
                     * 判断参数 PackageExpiredUnixTime 是否已赋值
                     * @return PackageExpiredUnixTime 是否已赋值
                     * 
                     */
                    bool PackageExpiredUnixTimeHasBeenSet() const;

                    /**
                     * 获取Number of SMS messages in package.
                     * @return AmountOfPackage Number of SMS messages in package.
                     * 
                     */
                    uint64_t GetAmountOfPackage() const;

                    /**
                     * 设置Number of SMS messages in package.
                     * @param _amountOfPackage Number of SMS messages in package.
                     * 
                     */
                    void SetAmountOfPackage(const uint64_t& _amountOfPackage);

                    /**
                     * 判断参数 AmountOfPackage 是否已赋值
                     * @return AmountOfPackage 是否已赋值
                     * 
                     */
                    bool AmountOfPackageHasBeenSet() const;

                    /**
                     * 获取0: gifted package. 1: purchased package.
                     * @return TypeOfPackage 0: gifted package. 1: purchased package.
                     * 
                     */
                    uint64_t GetTypeOfPackage() const;

                    /**
                     * 设置0: gifted package. 1: purchased package.
                     * @param _typeOfPackage 0: gifted package. 1: purchased package.
                     * 
                     */
                    void SetTypeOfPackage(const uint64_t& _typeOfPackage);

                    /**
                     * 判断参数 TypeOfPackage 是否已赋值
                     * @return TypeOfPackage 是否已赋值
                     * 
                     */
                    bool TypeOfPackageHasBeenSet() const;

                    /**
                     * 获取Package ID.
                     * @return PackageId Package ID.
                     * 
                     */
                    uint64_t GetPackageId() const;

                    /**
                     * 设置Package ID.
                     * @param _packageId Package ID.
                     * 
                     */
                    void SetPackageId(const uint64_t& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Current usage.
                     * @return CurrentUsage Current usage.
                     * 
                     */
                    uint64_t GetCurrentUsage() const;

                    /**
                     * 设置Current usage.
                     * @param _currentUsage Current usage.
                     * 
                     */
                    void SetCurrentUsage(const uint64_t& _currentUsage);

                    /**
                     * 判断参数 CurrentUsage 是否已赋值
                     * @return CurrentUsage 是否已赋值
                     * 
                     */
                    bool CurrentUsageHasBeenSet() const;

                private:

                    /**
                     * Package creation time in standard time format, such as 2019-10-08 17:18:37.
                     */
                    std::string m_packageCreateTime;
                    bool m_packageCreateTimeHasBeenSet;

                    /**
                     * Package creation time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_packageCreateUnixTime;
                    bool m_packageCreateUnixTimeHasBeenSet;

                    /**
                     * Package effective time in standard time format, such as 2019-10-08 17:18:37.
                     */
                    std::string m_packageEffectiveTime;
                    bool m_packageEffectiveTimeHasBeenSet;

                    /**
                     * Package effective time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_packageEffectiveUnixTime;
                    bool m_packageEffectiveUnixTimeHasBeenSet;

                    /**
                     * Package expiration time in standard time format, such as 2019-10-08 17:18:37.
                     */
                    std::string m_packageExpiredTime;
                    bool m_packageExpiredTimeHasBeenSet;

                    /**
                     * Package expiration time in seconds in the format of UNIX timestamp.
                     */
                    uint64_t m_packageExpiredUnixTime;
                    bool m_packageExpiredUnixTimeHasBeenSet;

                    /**
                     * Number of SMS messages in package.
                     */
                    uint64_t m_amountOfPackage;
                    bool m_amountOfPackageHasBeenSet;

                    /**
                     * 0: gifted package. 1: purchased package.
                     */
                    uint64_t m_typeOfPackage;
                    bool m_typeOfPackageHasBeenSet;

                    /**
                     * Package ID.
                     */
                    uint64_t m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Current usage.
                     */
                    uint64_t m_currentUsage;
                    bool m_currentUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICS_H_
