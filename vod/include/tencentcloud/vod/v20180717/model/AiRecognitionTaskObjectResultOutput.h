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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskObjectResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output of intelligent object recognition.
                */
                class AiRecognitionTaskObjectResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskObjectResultOutput();
                    ~AiRecognitionTaskObjectResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent object recognition result set
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * @return ResultSet Intelligent object recognition result set
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * 
                     */
                    std::vector<AiRecognitionTaskObjectResultItem> GetResultSet() const;

                    /**
                     * 设置Intelligent object recognition result set
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * @param _resultSet Intelligent object recognition result set
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     * 
                     */
                    void SetResultSet(const std::vector<AiRecognitionTaskObjectResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取URL to the file of the object recognition result set. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @return ResultSetFileUrl URL to the file of the object recognition result set. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * 
                     */
                    std::string GetResultSetFileUrl() const;

                    /**
                     * 设置URL to the file of the object recognition result set. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     * @param _resultSetFileUrl URL to the file of the object recognition result set. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
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
                     * 获取Expiration time of the URL to the object recognition result set, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     * @return ResultSetFileUrlExpireTime Expiration time of the URL to the object recognition result set, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     * 
                     */
                    std::string GetResultSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the URL to the object recognition result set, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     * @param _resultSetFileUrlExpireTime Expiration time of the URL to the object recognition result set, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
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
                     * Intelligent object recognition result set
<font color=red>Note</font>: this list displays up to the first 100 results. You can get all the results from the file whose URL is `SegmentSetFileUrl`.
                     */
                    std::vector<AiRecognitionTaskObjectResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * URL to the file of the object recognition result set. The file format is JSON, and the data structure is the same as `SegmentSet`. The file will be deleted upon the expiration time `SegmentSetFileUrlExpireTime`, instead of being stored permanently.
                     */
                    std::string m_resultSetFileUrl;
                    bool m_resultSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the URL to the object recognition result set, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732)
                     */
                    std::string m_resultSetFileUrlExpireTime;
                    bool m_resultSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTOUTPUT_H_
