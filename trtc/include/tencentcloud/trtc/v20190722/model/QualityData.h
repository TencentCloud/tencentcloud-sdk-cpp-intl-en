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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_QUALITYDATA_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_QUALITYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TimeValue.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The quality data returned by ES.
                */
                class QualityData : public AbstractModel
                {
                public:
                    QualityData();
                    ~QualityData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The quality data.
                     * @return Content The quality data.
                     * 
                     */
                    std::vector<TimeValue> GetContent() const;

                    /**
                     * 设置The quality data.
                     * @param _content The quality data.
                     * 
                     */
                    void SetContent(const std::vector<TimeValue>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取The user ID.
                     * @return UserId The user ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID.
                     * @param _userId The user ID.
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
                     * 获取The remote user ID. An empty string indicates that the data is upstream data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PeerId The remote user ID. An empty string indicates that the data is upstream data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置The remote user ID. An empty string indicates that the data is upstream data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _peerId The remote user ID. An empty string indicates that the data is upstream data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                    /**
                     * 获取The data type.
                     * @return DataType The data type.
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置The data type.
                     * @param _dataType The data type.
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * The quality data.
                     */
                    std::vector<TimeValue> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The user ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The remote user ID. An empty string indicates that the data is upstream data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                    /**
                     * The data type.
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_QUALITYDATA_H_
