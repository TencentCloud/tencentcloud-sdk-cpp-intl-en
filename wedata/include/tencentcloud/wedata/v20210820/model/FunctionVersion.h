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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONVERSION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Function Submission Version Information
                */
                class FunctionVersion : public AbstractModel
                {
                public:
                    FunctionVersion();
                    ~FunctionVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version number: V0 V1 V2
                     * @return Tag Version number: V0 V1 V2
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Version number: V0 V1 V2
                     * @param _tag Version number: V0 V1 V2
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Submitter ID
                     * @return UserId Submitter ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Submitter ID
                     * @param _userId Submitter ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Change Type: ADD, MODIFY
                     * @return Type Change Type: ADD, MODIFY
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Change Type: ADD, MODIFY
                     * @param _type Change Type: ADD, MODIFY
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Comment Remarks
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Remarks
                     * @param _comment Remarks
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Submission Time: UTC Seconds
                     * @return Timestamp Submission Time: UTC Seconds
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Submission Time: UTC Seconds
                     * @param _timestamp Submission Time: UTC Seconds
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Submitter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserName Submitter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Submitter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userName Submitter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Version Information: json string format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Content Version Information: json string format
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Version Information: json string format
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _content Version Information: json string format
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Version number: V0 V1 V2
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Submitter ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Change Type: ADD, MODIFY
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Submission Time: UTC Seconds
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Submitter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Version Information: json string format
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONVERSION_H_
