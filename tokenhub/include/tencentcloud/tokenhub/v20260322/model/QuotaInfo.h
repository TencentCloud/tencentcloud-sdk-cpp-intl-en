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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTAINFO_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Token quota information
                */
                class QuotaInfo : public AbstractModel
                {
                public:
                    QuotaInfo();
                    ~QuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quota package ID.
                     * @return PkgId Quota package ID.
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Quota package ID.
                     * @param _pkgId Quota package ID.
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取Package status. Value: 1 (normal), 3 (exhausted), 4 (terminated).
                     * @return Status Package status. Value: 1 (normal), 3 (exhausted), 4 (terminated).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Package status. Value: 1 (normal), 3 (exhausted), 4 (terminated).
                     * @param _status Package status. Value: 1 (normal), 3 (exhausted), 4 (terminated).
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
                     * 获取Quota period. Value: d (by day), m (monthly), lifetime (total quota, no reset).
                     * @return CycleUnit Quota period. Value: d (by day), m (monthly), lifetime (total quota, no reset).
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Quota period. Value: d (by day), m (monthly), lifetime (total quota, no reset).
                     * @param _cycleUnit Quota period. Value: d (by day), m (monthly), lifetime (total quota, no reset).
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取Dimensional quota total amount (number of tokens). Use string to avoid precision loss.
                     * @return CycleCredits Dimensional quota total amount (number of tokens). Use string to avoid precision loss.
                     * 
                     */
                    std::string GetCycleCredits() const;

                    /**
                     * 设置Dimensional quota total amount (number of tokens). Use string to avoid precision loss.
                     * @param _cycleCredits Dimensional quota total amount (number of tokens). Use string to avoid precision loss.
                     * 
                     */
                    void SetCycleCredits(const std::string& _cycleCredits);

                    /**
                     * 判断参数 CycleCredits 是否已赋值
                     * @return CycleCredits 是否已赋值
                     * 
                     */
                    bool CycleCreditsHasBeenSet() const;

                    /**
                     * 获取Dimensional used amount (number of tokens). Use string literal to avoid precision loss.
                     * @return CycleUsed Dimensional used amount (number of tokens). Use string literal to avoid precision loss.
                     * 
                     */
                    std::string GetCycleUsed() const;

                    /**
                     * 设置Dimensional used amount (number of tokens). Use string literal to avoid precision loss.
                     * @param _cycleUsed Dimensional used amount (number of tokens). Use string literal to avoid precision loss.
                     * 
                     */
                    void SetCycleUsed(const std::string& _cycleUsed);

                    /**
                     * 判断参数 CycleUsed 是否已赋值
                     * @return CycleUsed 是否已赋值
                     * 
                     */
                    bool CycleUsedHasBeenSet() const;

                    /**
                     * 获取Quota effective start time.
                     * @return StartTime Quota effective start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Quota effective start time.
                     * @param _startTime Quota effective start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Quota expiration time.
                     * @return ExpireTime Quota expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Quota expiration time.
                     * @param _expireTime Quota expiration time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Quota package ID.
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Package status. Value: 1 (normal), 3 (exhausted), 4 (terminated).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Quota period. Value: d (by day), m (monthly), lifetime (total quota, no reset).
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Dimensional quota total amount (number of tokens). Use string to avoid precision loss.
                     */
                    std::string m_cycleCredits;
                    bool m_cycleCreditsHasBeenSet;

                    /**
                     * Dimensional used amount (number of tokens). Use string literal to avoid precision loss.
                     */
                    std::string m_cycleUsed;
                    bool m_cycleUsedHasBeenSet;

                    /**
                     * Quota effective start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Quota expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTAINFO_H_
