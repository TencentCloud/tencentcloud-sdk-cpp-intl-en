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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONTEXT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/MsgFileInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Obtain response of unsatisfied reply context.
                */
                class Context : public AbstractModel
                {
                public:
                    Context();
                    ~Context() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message record ID.
                     * @return RecordBizId Message record ID.
                     * 
                     */
                    std::string GetRecordBizId() const;

                    /**
                     * 设置Message record ID.
                     * @param _recordBizId Message record ID.
                     * 
                     */
                    void SetRecordBizId(const std::string& _recordBizId);

                    /**
                     * 判断参数 RecordBizId 是否已赋值
                     * @return RecordBizId 是否已赋值
                     * 
                     */
                    bool RecordBizIdHasBeenSet() const;

                    /**
                     * 获取Whether it is a user.
                     * @return IsVisitor Whether it is a user.
                     * 
                     */
                    bool GetIsVisitor() const;

                    /**
                     * 设置Whether it is a user.
                     * @param _isVisitor Whether it is a user.
                     * 
                     */
                    void SetIsVisitor(const bool& _isVisitor);

                    /**
                     * 判断参数 IsVisitor 是否已赋值
                     * @return IsVisitor 是否已赋值
                     * 
                     */
                    bool IsVisitorHasBeenSet() const;

                    /**
                     * 获取Nickname.
                     * @return NickName Nickname.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Nickname.
                     * @param _nickName Nickname.
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Avatar.
                     * @return Avatar Avatar.
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置Avatar.
                     * @param _avatar Avatar.
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取Message content.
                     * @return Content Message content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Message content.
                     * @param _content Message content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Document information.
                     * @return FileInfos Document information.
                     * 
                     */
                    std::vector<MsgFileInfo> GetFileInfos() const;

                    /**
                     * 设置Document information.
                     * @param _fileInfos Document information.
                     * 
                     */
                    void SetFileInfos(const std::vector<MsgFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取Response method, 15: clarification confirmation response.
                     * @return ReplyMethod Response method, 15: clarification confirmation response.
                     * 
                     */
                    uint64_t GetReplyMethod() const;

                    /**
                     * 设置Response method, 15: clarification confirmation response.
                     * @param _replyMethod Response method, 15: clarification confirmation response.
                     * 
                     */
                    void SetReplyMethod(const uint64_t& _replyMethod);

                    /**
                     * 判断参数 ReplyMethod 是否已赋值
                     * @return ReplyMethod 是否已赋值
                     * 
                     */
                    bool ReplyMethodHasBeenSet() const;

                private:

                    /**
                     * Message record ID.
                     */
                    std::string m_recordBizId;
                    bool m_recordBizIdHasBeenSet;

                    /**
                     * Whether it is a user.
                     */
                    bool m_isVisitor;
                    bool m_isVisitorHasBeenSet;

                    /**
                     * Nickname.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Avatar.
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * Message content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Document information.
                     */
                    std::vector<MsgFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Response method, 15: clarification confirmation response.
                     */
                    uint64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTEXT_H_
