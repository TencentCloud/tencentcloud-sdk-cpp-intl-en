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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_OFFSITEFLAG_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_OFFSITEFLAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Suspicious login location settings
                */
                class OffsiteFlag : public AbstractModel
                {
                public:
                    OffsiteFlag();
                    ~OffsiteFlag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Verification flag
                     * @return VerifyFlag Verification flag
                     */
                    uint64_t GetVerifyFlag() const;

                    /**
                     * 设置Verification flag
                     * @param VerifyFlag Verification flag
                     */
                    void SetVerifyFlag(const uint64_t& _verifyFlag);

                    /**
                     * 判断参数 VerifyFlag 是否已赋值
                     * @return VerifyFlag 是否已赋值
                     */
                    bool VerifyFlagHasBeenSet() const;

                    /**
                     * 获取Phone notification
                     * @return NotifyPhone Phone notification
                     */
                    uint64_t GetNotifyPhone() const;

                    /**
                     * 设置Phone notification
                     * @param NotifyPhone Phone notification
                     */
                    void SetNotifyPhone(const uint64_t& _notifyPhone);

                    /**
                     * 判断参数 NotifyPhone 是否已赋值
                     * @return NotifyPhone 是否已赋值
                     */
                    bool NotifyPhoneHasBeenSet() const;

                    /**
                     * 获取Email notification
                     * @return NotifyEmail Email notification
                     */
                    int64_t GetNotifyEmail() const;

                    /**
                     * 设置Email notification
                     * @param NotifyEmail Email notification
                     */
                    void SetNotifyEmail(const int64_t& _notifyEmail);

                    /**
                     * 判断参数 NotifyEmail 是否已赋值
                     * @return NotifyEmail 是否已赋值
                     */
                    bool NotifyEmailHasBeenSet() const;

                    /**
                     * 获取WeChat notification
                     * @return NotifyWechat WeChat notification
                     */
                    uint64_t GetNotifyWechat() const;

                    /**
                     * 设置WeChat notification
                     * @param NotifyWechat WeChat notification
                     */
                    void SetNotifyWechat(const uint64_t& _notifyWechat);

                    /**
                     * 判断参数 NotifyWechat 是否已赋值
                     * @return NotifyWechat 是否已赋值
                     */
                    bool NotifyWechatHasBeenSet() const;

                    /**
                     * 获取Alert
                     * @return Tips Alert
                     */
                    uint64_t GetTips() const;

                    /**
                     * 设置Alert
                     * @param Tips Alert
                     */
                    void SetTips(const uint64_t& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     */
                    bool TipsHasBeenSet() const;

                private:

                    /**
                     * Verification flag
                     */
                    uint64_t m_verifyFlag;
                    bool m_verifyFlagHasBeenSet;

                    /**
                     * Phone notification
                     */
                    uint64_t m_notifyPhone;
                    bool m_notifyPhoneHasBeenSet;

                    /**
                     * Email notification
                     */
                    int64_t m_notifyEmail;
                    bool m_notifyEmailHasBeenSet;

                    /**
                     * WeChat notification
                     */
                    uint64_t m_notifyWechat;
                    bool m_notifyWechatHasBeenSet;

                    /**
                     * Alert
                     */
                    uint64_t m_tips;
                    bool m_tipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_OFFSITEFLAG_H_
