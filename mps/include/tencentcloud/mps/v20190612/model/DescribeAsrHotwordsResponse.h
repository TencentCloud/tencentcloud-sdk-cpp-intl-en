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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AsrHotwordsSetItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAsrHotwords response structure.
                */
                class DescribeAsrHotwordsResponse : public AbstractModel
                {
                public:
                    DescribeAsrHotwordsResponse();
                    ~DescribeAsrHotwordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the hotword lexicon to be queried.
                     * @return HotwordsId ID of the hotword lexicon to be queried.
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

                    /**
                     * 获取Current hotword lexicon id status. a value of 0 indicates that no template is bound to this hotword lexicon at the query moment and it can be deleted.
                     * @return Status Current hotword lexicon id status. a value of 0 indicates that no template is bound to this hotword lexicon at the query moment and it can be deleted.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Name of the hot lexicon.
                     * @return Name Name of the hot lexicon.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Specifies the value is 0 for a temporary hotword lexicon and returns the string provided during creation.
Specifies the value is 1 for a file-based hotword lexicon, and returns the content of the file uploaded during creation.


                     * @return Type Specifies the value is 0 for a temporary hotword lexicon and returns the string provided during creation.
Specifies the value is 1 for a file-based hotword lexicon, and returns the content of the file uploaded during creation.


                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Name of the uploaded hotword file.
                     * @return FileName Name of the uploaded hotword file.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取List of hotwords returned for the query.
                     * @return HotWords List of hotwords returned for the query.
                     * 
                     */
                    std::vector<AsrHotwordsSetItem> GetHotWords() const;

                    /**
                     * 判断参数 HotWords 是否已赋值
                     * @return HotWords 是否已赋值
                     * 
                     */
                    bool HotWordsHasBeenSet() const;

                    /**
                     * 获取Hotword text, which depends on the value of Type.
If the value of Type is 0, the hotword string is returned.
If the value of Type is 1, the base64-encoded content of the hotword file is returned.
                     * @return Content Hotword text, which depends on the value of Type.
If the value of Type is 0, the hotword string is returned.
If the value of Type is 1, the base64-encoded content of the hotword file is returned.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Number of words contained in the hotword lexicon.
                     * @return WordCount Number of words contained in the hotword lexicon.
                     * 
                     */
                    uint64_t GetWordCount() const;

                    /**
                     * 判断参数 WordCount 是否已赋值
                     * @return WordCount 是否已赋值
                     * 
                     */
                    bool WordCountHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Hot word lexicon createtime in ISOUTC format "2006-01-02T15:04:05Z".
                     * @return CreateTime Hot word lexicon createtime in ISOUTC format "2006-01-02T15:04:05Z".
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Hot lexicon last modified in ISOUTC format "2006-01-02T15:04:05Z".
                     * @return UpdateTime Hot lexicon last modified in ISOUTC format "2006-01-02T15:04:05Z".
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * ID of the hotword lexicon to be queried.
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * Current hotword lexicon id status. a value of 0 indicates that no template is bound to this hotword lexicon at the query moment and it can be deleted.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Name of the hot lexicon.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the value is 0 for a temporary hotword lexicon and returns the string provided during creation.
Specifies the value is 1 for a file-based hotword lexicon, and returns the content of the file uploaded during creation.


                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Name of the uploaded hotword file.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * List of hotwords returned for the query.
                     */
                    std::vector<AsrHotwordsSetItem> m_hotWords;
                    bool m_hotWordsHasBeenSet;

                    /**
                     * Hotword text, which depends on the value of Type.
If the value of Type is 0, the hotword string is returned.
If the value of Type is 1, the base64-encoded content of the hotword file is returned.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Number of words contained in the hotword lexicon.
                     */
                    uint64_t m_wordCount;
                    bool m_wordCountHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Hot word lexicon createtime in ISOUTC format "2006-01-02T15:04:05Z".
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Hot lexicon last modified in ISOUTC format "2006-01-02T15:04:05Z".
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSRESPONSE_H_
