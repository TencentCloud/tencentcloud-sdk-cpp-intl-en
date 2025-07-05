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
                     * 获取Current status of the hotword lexicon corresponding to the ID. The value 0 indicates that no template is bound to this hotword lexicon when the query is performed and that the hotword lexicon can be deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Current status of the hotword lexicon corresponding to the ID. The value 0 indicates that no template is bound to this hotword lexicon when the query is performed and that the hotword lexicon can be deleted.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Hotword lexicon name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Hotword lexicon name.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取The value is 0 for a temporary hotword lexicon, and the string provided during creation is returned.
The value is 1 for a file-based hotword lexicon, and the content of the file uploaded during creation is returned.


Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type The value is 0 for a temporary hotword lexicon, and the string provided during creation is returned.
The value is 1 for a file-based hotword lexicon, and the content of the file uploaded during creation is returned.


Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileName Name of the uploaded hotword file.
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Content Hotword text, which depends on the value of Type.
If the value of Type is 0, the hotword string is returned.
If the value of Type is 1, the base64-encoded content of the hotword file is returned.
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WordCount Number of words contained in the hotword lexicon.
Note: This field may return null, indicating that no valid value can be obtained.
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

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Offset Paging offset. Default value: 0.

Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, "2006-01-02T15:04:05Z".Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, "2006-01-02T15:04:05Z".Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Modification time of the hotword lexicon in ISO datetime format (UTC time). For example, "2006-01-02T15:04:05Z".
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Modification time of the hotword lexicon in ISO datetime format (UTC time). For example, "2006-01-02T15:04:05Z".
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Current status of the hotword lexicon corresponding to the ID. The value 0 indicates that no template is bound to this hotword lexicon when the query is performed and that the hotword lexicon can be deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Hotword lexicon name.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The value is 0 for a temporary hotword lexicon, and the string provided during creation is returned.
The value is 1 for a file-based hotword lexicon, and the content of the file uploaded during creation is returned.


Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Name of the uploaded hotword file.
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Number of words contained in the hotword lexicon.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_wordCount;
                    bool m_wordCountHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, "2006-01-02T15:04:05Z".Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time of the hotword lexicon in ISO datetime format (UTC time). For example, "2006-01-02T15:04:05Z".
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSRESPONSE_H_
