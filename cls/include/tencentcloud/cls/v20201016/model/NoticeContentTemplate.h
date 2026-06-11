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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTTEMPLATE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Notification content template information.
                */
                class NoticeContentTemplate : public AbstractModel
                {
                public:
                    NoticeContentTemplate();
                    ~NoticeContentTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification content template ID.
                     * @return NoticeContentId Notification content template ID.
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置Notification content template ID.
                     * @param _noticeContentId Notification content template ID.
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
                     * 获取notification content template name
                     * @return Name notification content template name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置notification content template name
                     * @param _name notification content template name
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
                     * 获取Language type.

0: Chinese
1: English
                     * @return Type Language type.

0: Chinese
1: English
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Language type.

0: Chinese
1: English
                     * @param _type Language type.

0: Chinese
1: English
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
                     * 获取Notification content template information.
                     * @return NoticeContents Notification content template information.
                     * 
                     */
                    std::vector<NoticeContent> GetNoticeContents() const;

                    /**
                     * 设置Notification content template information.
                     * @param _noticeContents Notification content template information.
                     * 
                     */
                    void SetNoticeContents(const std::vector<NoticeContent>& _noticeContents);

                    /**
                     * 判断参数 NoticeContents 是否已赋值
                     * @return NoticeContents 是否已赋值
                     * 
                     */
                    bool NoticeContentsHasBeenSet() const;

                    /**
                     * 获取Notification content template tag.

0: user-customized
1: Built-in
                     * @return Flag Notification content template tag.

0: user-customized
1: Built-in
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置Notification content template tag.

0: user-customized
1: Built-in
                     * @param _flag Notification content template tag.

0: user-customized
1: Built-in
                     * 
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取Root account of a creator.
                     * @return Uin Root account of a creator.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Root account of a creator.
                     * @param _uin Root account of a creator.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-account of a creator or modifier.
                     * @return SubUin Sub-account of a creator or modifier.
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置Sub-account of a creator or modifier.
                     * @param _subUin Sub-account of a creator or modifier.
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Creation time. A timestamp in seconds.
                     * @return CreateTime Creation time. A timestamp in seconds.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time. A timestamp in seconds.
                     * @param _createTime Creation time. A timestamp in seconds.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time. A timestamp in seconds.
                     * @return UpdateTime Update time. A timestamp in seconds.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time. A timestamp in seconds.
                     * @param _updateTime Update time. A timestamp in seconds.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Notification content template ID.
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                    /**
                     * notification content template name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Language type.

0: Chinese
1: English
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Notification content template information.
                     */
                    std::vector<NoticeContent> m_noticeContents;
                    bool m_noticeContentsHasBeenSet;

                    /**
                     * Notification content template tag.

0: user-customized
1: Built-in
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Root account of a creator.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-account of a creator or modifier.
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Creation time. A timestamp in seconds.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time. A timestamp in seconds.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTTEMPLATE_H_
