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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKCHARGEPREPAID_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Billing mode of the instance
                */
                class DiskChargePrepaid : public AbstractModel
                {
                public:
                    DiskChargePrepaid();
                    ~DiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the duration for purchasing cloud block storage (cbs) in months. default unit: month. valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @return Period Specifies the duration for purchasing cloud block storage (cbs) in months. default unit: month. valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Specifies the duration for purchasing cloud block storage (cbs) in months. default unit: month. valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @param _period Specifies the duration for purchasing cloud block storage (cbs) in months. default unit: month. valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Automatic renewal flag. valid values:.
<ul>
<Li>NOTIFY_AND_AUTO_RENEW: notifies expiry and renews automatically.</li>.
<Li>NOTIFY_AND_MANUAL_RENEW: notifies expiry but does not renew automatically.</li>.
<Li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.</li>.
</ul>
Default value: NOTIFY_AND_MANUAL_RENEW.
                     * @return RenewFlag Automatic renewal flag. valid values:.
<ul>
<Li>NOTIFY_AND_AUTO_RENEW: notifies expiry and renews automatically.</li>.
<Li>NOTIFY_AND_MANUAL_RENEW: notifies expiry but does not renew automatically.</li>.
<Li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.</li>.
</ul>
Default value: NOTIFY_AND_MANUAL_RENEW.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Automatic renewal flag. valid values:.
<ul>
<Li>NOTIFY_AND_AUTO_RENEW: notifies expiry and renews automatically.</li>.
<Li>NOTIFY_AND_MANUAL_RENEW: notifies expiry but does not renew automatically.</li>.
<Li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.</li>.
</ul>
Default value: NOTIFY_AND_MANUAL_RENEW.
                     * @param _renewFlag Automatic renewal flag. valid values:.
<ul>
<Li>NOTIFY_AND_AUTO_RENEW: notifies expiry and renews automatically.</li>.
<Li>NOTIFY_AND_MANUAL_RENEW: notifies expiry but does not renew automatically.</li>.
<Li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.</li>.
</ul>
Default value: NOTIFY_AND_MANUAL_RENEW.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Specifies the current expiration time of the child machine when the expiration time of the cloud block storage needs to align with the mounted child machine. you can input this parameter. if Period is input at this time, it indicates the duration of child machine renewal. the cloud disk will automatically renew according to the expiration time after the child machine is renewed.
                     * @return CurInstanceDeadline Specifies the current expiration time of the child machine when the expiration time of the cloud block storage needs to align with the mounted child machine. you can input this parameter. if Period is input at this time, it indicates the duration of child machine renewal. the cloud disk will automatically renew according to the expiration time after the child machine is renewed.
                     * 
                     */
                    std::string GetCurInstanceDeadline() const;

                    /**
                     * 设置Specifies the current expiration time of the child machine when the expiration time of the cloud block storage needs to align with the mounted child machine. you can input this parameter. if Period is input at this time, it indicates the duration of child machine renewal. the cloud disk will automatically renew according to the expiration time after the child machine is renewed.
                     * @param _curInstanceDeadline Specifies the current expiration time of the child machine when the expiration time of the cloud block storage needs to align with the mounted child machine. you can input this parameter. if Period is input at this time, it indicates the duration of child machine renewal. the cloud disk will automatically renew according to the expiration time after the child machine is renewed.
                     * 
                     */
                    void SetCurInstanceDeadline(const std::string& _curInstanceDeadline);

                    /**
                     * 判断参数 CurInstanceDeadline 是否已赋值
                     * @return CurInstanceDeadline 是否已赋值
                     * 
                     */
                    bool CurInstanceDeadlineHasBeenSet() const;

                private:

                    /**
                     * Specifies the duration for purchasing cloud block storage (cbs) in months. default unit: month. valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Automatic renewal flag. valid values:.
<ul>
<Li>NOTIFY_AND_AUTO_RENEW: notifies expiry and renews automatically.</li>.
<Li>NOTIFY_AND_MANUAL_RENEW: notifies expiry but does not renew automatically.</li>.
<Li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.</li>.
</ul>
Default value: NOTIFY_AND_MANUAL_RENEW.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Specifies the current expiration time of the child machine when the expiration time of the cloud block storage needs to align with the mounted child machine. you can input this parameter. if Period is input at this time, it indicates the duration of child machine renewal. the cloud disk will automatically renew according to the expiration time after the child machine is renewed.
                     */
                    std::string m_curInstanceDeadline;
                    bool m_curInstanceDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKCHARGEPREPAID_H_
