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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICEDELIVERCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICEDELIVERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DeliverConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Log shipping configuration information of a notification channel.
                */
                class AlarmNoticeDeliverConfig : public AbstractModel
                {
                public:
                    AlarmNoticeDeliverConfig();
                    ~AlarmNoticeDeliverConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log shipping configuration information of a notification channel.
                     * @return DeliverConfig Log shipping configuration information of a notification channel.
                     * 
                     */
                    DeliverConfig GetDeliverConfig() const;

                    /**
                     * 设置Log shipping configuration information of a notification channel.
                     * @param _deliverConfig Log shipping configuration information of a notification channel.
                     * 
                     */
                    void SetDeliverConfig(const DeliverConfig& _deliverConfig);

                    /**
                     * 判断参数 DeliverConfig 是否已赋值
                     * @return DeliverConfig 是否已赋值
                     * 
                     */
                    bool DeliverConfigHasBeenSet() const;

                    /**
                     * 获取Shipping failure reason.
                     * @return ErrMsg Shipping failure reason.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Shipping failure reason.
                     * @param _errMsg Shipping failure reason.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * Log shipping configuration information of a notification channel.
                     */
                    DeliverConfig m_deliverConfig;
                    bool m_deliverConfigHasBeenSet;

                    /**
                     * Shipping failure reason.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICEDELIVERCONFIG_H_
