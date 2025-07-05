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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFACEOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFACEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI-based sample management - face data operation.
                */
                class AiSampleFaceOperation : public AbstractModel
                {
                public:
                    AiSampleFaceOperation();
                    ~AiSampleFaceOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation type. Valid values: add, delete, reset. The `reset` operation will clear the existing face data of a figure and add `FaceContents` as the specified face data.
                     * @return Type Operation type. Valid values: add, delete, reset. The `reset` operation will clear the existing face data of a figure and add `FaceContents` as the specified face data.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operation type. Valid values: add, delete, reset. The `reset` operation will clear the existing face data of a figure and add `FaceContents` as the specified face data.
                     * @param _type Operation type. Valid values: add, delete, reset. The `reset` operation will clear the existing face data of a figure and add `FaceContents` as the specified face data.
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
                     * 获取Face ID set, which is required if `Type` is `delete`.
                     * @return FaceIds Face ID set, which is required if `Type` is `delete`.
                     * 
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 设置Face ID set, which is required if `Type` is `delete`.
                     * @param _faceIds Face ID set, which is required if `Type` is `delete`.
                     * 
                     */
                    void SetFaceIds(const std::vector<std::string>& _faceIds);

                    /**
                     * 判断参数 FaceIds 是否已赋值
                     * @return FaceIds 是否已赋值
                     * 
                     */
                    bool FaceIdsHasBeenSet() const;

                    /**
                     * 获取Face image [Base64](https://tools.ietf.org/html/rfc4648) Encoded string collection, only supports jpeg and png image formats. 
<li>When Type is add or reset, this field is required;</li>
<li>Array length limit: 5 pictures. </li>
Note: The picture must be a clear frontal photo of a single person, with a pixel size of no less than 200*200.
                     * @return FaceContents Face image [Base64](https://tools.ietf.org/html/rfc4648) Encoded string collection, only supports jpeg and png image formats. 
<li>When Type is add or reset, this field is required;</li>
<li>Array length limit: 5 pictures. </li>
Note: The picture must be a clear frontal photo of a single person, with a pixel size of no less than 200*200.
                     * 
                     */
                    std::vector<std::string> GetFaceContents() const;

                    /**
                     * 设置Face image [Base64](https://tools.ietf.org/html/rfc4648) Encoded string collection, only supports jpeg and png image formats. 
<li>When Type is add or reset, this field is required;</li>
<li>Array length limit: 5 pictures. </li>
Note: The picture must be a clear frontal photo of a single person, with a pixel size of no less than 200*200.
                     * @param _faceContents Face image [Base64](https://tools.ietf.org/html/rfc4648) Encoded string collection, only supports jpeg and png image formats. 
<li>When Type is add or reset, this field is required;</li>
<li>Array length limit: 5 pictures. </li>
Note: The picture must be a clear frontal photo of a single person, with a pixel size of no less than 200*200.
                     * 
                     */
                    void SetFaceContents(const std::vector<std::string>& _faceContents);

                    /**
                     * 判断参数 FaceContents 是否已赋值
                     * @return FaceContents 是否已赋值
                     * 
                     */
                    bool FaceContentsHasBeenSet() const;

                private:

                    /**
                     * Operation type. Valid values: add, delete, reset. The `reset` operation will clear the existing face data of a figure and add `FaceContents` as the specified face data.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Face ID set, which is required if `Type` is `delete`.
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                    /**
                     * Face image [Base64](https://tools.ietf.org/html/rfc4648) Encoded string collection, only supports jpeg and png image formats. 
<li>When Type is add or reset, this field is required;</li>
<li>Array length limit: 5 pictures. </li>
Note: The picture must be a clear frontal photo of a single person, with a pixel size of no less than 200*200.
                     */
                    std::vector<std::string> m_faceContents;
                    bool m_faceContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFACEOPERATION_H_
