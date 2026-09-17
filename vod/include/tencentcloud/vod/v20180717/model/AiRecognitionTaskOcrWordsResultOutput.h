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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrWordsResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class AiRecognitionTaskOcrWordsResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskOcrWordsResultOutput();
                    ~AiRecognitionTaskOcrWordsResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ResultSet 
                     * 
                     */
                    std::vector<AiRecognitionTaskOcrWordsResultItem> GetResultSet() const;

                    /**
                     * 设置
                     * @param _resultSet 
                     * 
                     */
                    void SetResultSet(const std::vector<AiRecognitionTaskOcrWordsResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResultSetFileUrl 
                     * 
                     */
                    std::string GetResultSetFileUrl() const;

                    /**
                     * 设置
                     * @param _resultSetFileUrl 
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
                     * 获取
                     * @return ResultSetFileUrlExpireTime 
                     * 
                     */
                    std::string GetResultSetFileUrlExpireTime() const;

                    /**
                     * 设置
                     * @param _resultSetFileUrlExpireTime 
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
                     * 
                     */
                    std::vector<AiRecognitionTaskOcrWordsResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resultSetFileUrl;
                    bool m_resultSetFileUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resultSetFileUrlExpireTime;
                    bool m_resultSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTOUTPUT_H_
