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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAlarmNotice request structure.
                */
                class CreateAlarmNoticeRequest : public AbstractModel
                {
                public:
                    CreateAlarmNoticeRequest();
                    ~CreateAlarmNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm template name
                     * @return Name Alarm template name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm template name
                     * @param Name Alarm template name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Alarm template type. Valid values:
<br><li> `Trigger`: alarm triggered
<br><li> `Recovery`: alarm cleared
<br><li> `All`: alarm triggered and alarm cleared
                     * @return Type Alarm template type. Valid values:
<br><li> `Trigger`: alarm triggered
<br><li> `Recovery`: alarm cleared
<br><li> `All`: alarm triggered and alarm cleared
                     */
                    std::string GetType() const;

                    /**
                     * 设置Alarm template type. Valid values:
<br><li> `Trigger`: alarm triggered
<br><li> `Recovery`: alarm cleared
<br><li> `All`: alarm triggered and alarm cleared
                     * @param Type Alarm template type. Valid values:
<br><li> `Trigger`: alarm triggered
<br><li> `Recovery`: alarm cleared
<br><li> `All`: alarm triggered and alarm cleared
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Information of the recipient in alarm template
                     * @return NoticeReceivers Information of the recipient in alarm template
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置Information of the recipient in alarm template
                     * @param NoticeReceivers Information of the recipient in alarm template
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取Alarm template callback information
                     * @return WebCallbacks Alarm template callback information
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置Alarm template callback information
                     * @param WebCallbacks Alarm template callback information
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     */
                    bool WebCallbacksHasBeenSet() const;

                private:

                    /**
                     * Alarm template name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Alarm template type. Valid values:
<br><li> `Trigger`: alarm triggered
<br><li> `Recovery`: alarm cleared
<br><li> `All`: alarm triggered and alarm cleared
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Information of the recipient in alarm template
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * Alarm template callback information
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_
