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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRWORDSRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRWORDSRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrWordsResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Speech keyword recognition output.
                */
                class AiRecognitionTaskAsrWordsResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrWordsResultOutput();
                    ~AiRecognitionTaskAsrWordsResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result set of speech keyword recognition.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ResultSetFileUrl.
                     * @return ResultSet Result set of speech keyword recognition.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ResultSetFileUrl.
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrWordsResultItem> GetResultSet() const;

                    /**
                     * 设置Result set of speech keyword recognition.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ResultSetFileUrl.
                     * @param _resultSet Result set of speech keyword recognition.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ResultSetFileUrl.
                     * 
                     */
                    void SetResultSet(const std::vector<AiRecognitionTaskAsrWordsResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取URL of the speech keyword recognition result set file. The content of the file is in JSON format, and its data structure is consistent with the fields of ResultSet. (The file is not retained permanently. It will be deleted after reaching ResultSetFileUrlExpireTime.)
                     * @return ResultSetFileUrl URL of the speech keyword recognition result set file. The content of the file is in JSON format, and its data structure is consistent with the fields of ResultSet. (The file is not retained permanently. It will be deleted after reaching ResultSetFileUrlExpireTime.)
                     * 
                     */
                    std::string GetResultSetFileUrl() const;

                    /**
                     * 设置URL of the speech keyword recognition result set file. The content of the file is in JSON format, and its data structure is consistent with the fields of ResultSet. (The file is not retained permanently. It will be deleted after reaching ResultSetFileUrlExpireTime.)
                     * @param _resultSetFileUrl URL of the speech keyword recognition result set file. The content of the file is in JSON format, and its data structure is consistent with the fields of ResultSet. (The file is not retained permanently. It will be deleted after reaching ResultSetFileUrlExpireTime.)
                     * 
                     */
                    void SetResultSetFileUrl(const std::string& _resultSetFileUrl);

                    /**
                     * 判断参数 ResultSetFileUrl 是否已赋值
                     * @return ResultSetFileUrl 是否已赋值
                     * 
                     */
                    bool ResultSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the speech keyword recognition result set file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ResultSetFileUrlExpireTime Expiration time of the speech keyword recognition result set file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetResultSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the speech keyword recognition result set file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _resultSetFileUrlExpireTime Expiration time of the speech keyword recognition result set file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetResultSetFileUrlExpireTime(const std::string& _resultSetFileUrlExpireTime);

                    /**
                     * 判断参数 ResultSetFileUrlExpireTime 是否已赋值
                     * @return ResultSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool ResultSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Result set of speech keyword recognition.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ResultSetFileUrl.
                     */
                    std::vector<AiRecognitionTaskAsrWordsResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * URL of the speech keyword recognition result set file. The content of the file is in JSON format, and its data structure is consistent with the fields of ResultSet. (The file is not retained permanently. It will be deleted after reaching ResultSetFileUrlExpireTime.)
                     */
                    std::string m_resultSetFileUrl;
                    bool m_resultSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the speech keyword recognition result set file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_resultSetFileUrlExpireTime;
                    bool m_resultSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRWORDSRESULTOUTPUT_H_
