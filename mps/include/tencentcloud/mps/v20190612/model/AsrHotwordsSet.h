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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSET_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Returned result set of hotword lexicon query.
                */
                class AsrHotwordsSet : public AbstractModel
                {
                public:
                    AsrHotwordsSet();
                    ~AsrHotwordsSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HotwordsId Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 设置Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hotwordsId Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHotwordsId(const std::string& _hotwordsId);

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

                    /**
                     * 获取Current hotword lexicon status. The value indicates the number of smart subtitle templates bound to this hotword lexicon.
If the value of Status is 0, it indicates that the hotword lexicon is not referenced by any smart subtitle template and that it can be deleted.
If the value of Status is not 0, it indicates that the hotword lexicon cannot be deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Current hotword lexicon status. The value indicates the number of smart subtitle templates bound to this hotword lexicon.
If the value of Status is 0, it indicates that the hotword lexicon is not referenced by any smart subtitle template and that it can be deleted.
If the value of Status is not 0, it indicates that the hotword lexicon cannot be deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Current hotword lexicon status. The value indicates the number of smart subtitle templates bound to this hotword lexicon.
If the value of Status is 0, it indicates that the hotword lexicon is not referenced by any smart subtitle template and that it can be deleted.
If the value of Status is not 0, it indicates that the hotword lexicon cannot be deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Current hotword lexicon status. The value indicates the number of smart subtitle templates bound to this hotword lexicon.
If the value of Status is 0, it indicates that the hotword lexicon is not referenced by any smart subtitle template and that it can be deleted.
If the value of Status is not 0, it indicates that the hotword lexicon cannot be deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

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
                     * 设置Hotword lexicon name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Hotword lexicon name.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Number of hotwords in the hotword lexicon.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WordCount Number of hotwords in the hotword lexicon.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetWordCount() const;

                    /**
                     * 设置Number of hotwords in the hotword lexicon.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _wordCount Number of hotwords in the hotword lexicon.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWordCount(const uint64_t& _wordCount);

                    /**
                     * 判断参数 WordCount 是否已赋值
                     * @return WordCount 是否已赋值
                     * 
                     */
                    bool WordCountHasBeenSet() const;

                    /**
                     * 获取Name of the uploaded hotword file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileName Name of the uploaded hotword file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Name of the uploaded hotword file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileName Name of the uploaded hotword file.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取0: temporary hotword lexicon
1: file-based hotword lexicon
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type 0: temporary hotword lexicon
1: file-based hotword lexicon
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: temporary hotword lexicon
1: file-based hotword lexicon
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type 0: temporary hotword lexicon
1: file-based hotword lexicon
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * Current hotword lexicon status. The value indicates the number of smart subtitle templates bound to this hotword lexicon.
If the value of Status is 0, it indicates that the hotword lexicon is not referenced by any smart subtitle template and that it can be deleted.
If the value of Status is not 0, it indicates that the hotword lexicon cannot be deleted.
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
                     * Number of hotwords in the hotword lexicon.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_wordCount;
                    bool m_wordCountHasBeenSet;

                    /**
                     * Name of the uploaded hotword file.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creation time of the hotword lexicon in ISO datetime format (UTC time). For example, 2006-01-02T15:04:05Z.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 0: temporary hotword lexicon
1: file-based hotword lexicon
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSET_H_
