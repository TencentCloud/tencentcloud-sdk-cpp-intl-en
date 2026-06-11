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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNOTICECONTENTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNOTICECONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeContent.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyNoticeContent request structure.
                */
                class ModifyNoticeContentRequest : public AbstractModel
                {
                public:
                    ModifyNoticeContentRequest();
                    ~ModifyNoticeContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notification content template ID. Obtain the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/api/614/111714?from_cn_redirect=1).
                     * @return NoticeContentId Notification content template ID. Obtain the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/api/614/111714?from_cn_redirect=1).
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置Notification content template ID. Obtain the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/api/614/111714?from_cn_redirect=1).
                     * @param _noticeContentId Notification content template ID. Obtain the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/api/614/111714?from_cn_redirect=1).
                     * 
                     */
                    void SetNoticeContentId(const std::string& _noticeContentId);

                    /**
                     * 判断参数 NoticeContentId 是否已赋值
                     * @return NoticeContentId 是否已赋值
                     * 
                     */
                    bool NoticeContentIdHasBeenSet() const;

                    /**
                     * 获取Notification content template name.
                     * @return Name Notification content template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Notification content template name.
                     * @param _name Notification content template name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Content language of the notification.

0-Chinese by default, 1-English
                     * @return Type Content language of the notification.

0-Chinese by default, 1-English
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Content language of the notification.

0-Chinese by default, 1-English
                     * @param _type Content language of the notification.

0-Chinese by default, 1-English
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Notification content template details.
                     * @return NoticeContents Notification content template details.
                     * 
                     */
                    std::vector<NoticeContent> GetNoticeContents() const;

                    /**
                     * 设置Notification content template details.
                     * @param _noticeContents Notification content template details.
                     * 
                     */
                    void SetNoticeContents(const std::vector<NoticeContent>& _noticeContents);

                    /**
                     * 判断参数 NoticeContents 是否已赋值
                     * @return NoticeContents 是否已赋值
                     * 
                     */
                    bool NoticeContentsHasBeenSet() const;

                private:

                    /**
                     * Notification content template ID. Obtain the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/api/614/111714?from_cn_redirect=1).
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                    /**
                     * Notification content template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Content language of the notification.

0-Chinese by default, 1-English
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Notification content template details.
                     */
                    std::vector<NoticeContent> m_noticeContents;
                    bool m_noticeContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYNOTICECONTENTREQUEST_H_
