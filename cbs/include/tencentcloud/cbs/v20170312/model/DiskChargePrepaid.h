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
                * The billing method of an instance
                */
                class DiskChargePrepaid : public AbstractModel
                {
                public:
                    DiskChargePrepaid();
                    ~DiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The purchased usage period of a cloud disk (in months). Value range: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @return Period The purchased usage period of a cloud disk (in months). Value range: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置The purchased usage period of a cloud disk (in months). Value range: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @param Period The purchased usage period of a cloud disk (in months). Value range: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Auto Renewal flag. Value range: <br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically <br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically <br><br>Default value range: NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically.
                     * @return RenewFlag Auto Renewal flag. Value range: <br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically <br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically <br><br>Default value range: NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically.
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto Renewal flag. Value range: <br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically <br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically <br><br>Default value range: NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically.
                     * @param RenewFlag Auto Renewal flag. Value range: <br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically <br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically <br><br>Default value range: NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically.
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取This parameter is used when you align the expiration time of the cloud disk with that of the mounted server. It is the current expiration time of the server. In this case, the Period passed represents the renewal period of the server, and the cloud disk will be automatically renewed in alignment with the expiration time of the renewed server. Example value: 2018-03-30 20:15:03.
                     * @return CurInstanceDeadline This parameter is used when you align the expiration time of the cloud disk with that of the mounted server. It is the current expiration time of the server. In this case, the Period passed represents the renewal period of the server, and the cloud disk will be automatically renewed in alignment with the expiration time of the renewed server. Example value: 2018-03-30 20:15:03.
                     */
                    std::string GetCurInstanceDeadline() const;

                    /**
                     * 设置This parameter is used when you align the expiration time of the cloud disk with that of the mounted server. It is the current expiration time of the server. In this case, the Period passed represents the renewal period of the server, and the cloud disk will be automatically renewed in alignment with the expiration time of the renewed server. Example value: 2018-03-30 20:15:03.
                     * @param CurInstanceDeadline This parameter is used when you align the expiration time of the cloud disk with that of the mounted server. It is the current expiration time of the server. In this case, the Period passed represents the renewal period of the server, and the cloud disk will be automatically renewed in alignment with the expiration time of the renewed server. Example value: 2018-03-30 20:15:03.
                     */
                    void SetCurInstanceDeadline(const std::string& _curInstanceDeadline);

                    /**
                     * 判断参数 CurInstanceDeadline 是否已赋值
                     * @return CurInstanceDeadline 是否已赋值
                     */
                    bool CurInstanceDeadlineHasBeenSet() const;

                private:

                    /**
                     * The purchased usage period of a cloud disk (in months). Value range: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Auto Renewal flag. Value range: <br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically <br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically <br><br>Default value range: NOTIFY_AND_MANUAL_RENEW: Notify expiry but do not renew automatically.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * This parameter is used when you align the expiration time of the cloud disk with that of the mounted server. It is the current expiration time of the server. In this case, the Period passed represents the renewal period of the server, and the cloud disk will be automatically renewed in alignment with the expiration time of the renewed server. Example value: 2018-03-30 20:15:03.
                     */
                    std::string m_curInstanceDeadline;
                    bool m_curInstanceDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKCHARGEPREPAID_H_
