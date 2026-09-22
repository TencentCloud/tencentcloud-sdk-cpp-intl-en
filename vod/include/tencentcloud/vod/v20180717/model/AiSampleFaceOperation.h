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
                * AI sample management, face data manipulation.
                */
                class AiSampleFaceOperation : public AbstractModel
                {
                public:
                    AiSampleFaceOperation();
                    ~AiSampleFaceOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Operation type. Available values: add, delete, reset. The reset operation will clear the existing face data of the person and add the face data specified by FaceContents.</p>
                     * @return Type <p>Operation type. Available values: add, delete, reset. The reset operation will clear the existing face data of the person and add the face data specified by FaceContents.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Operation type. Available values: add, delete, reset. The reset operation will clear the existing face data of the person and add the face data specified by FaceContents.</p>
                     * @param _type <p>Operation type. Available values: add, delete, reset. The reset operation will clear the existing face data of the person and add the face data specified by FaceContents.</p>
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
                     * 获取<p>Human face ID set. This field is required when Type is delete.</p>
                     * @return FaceIds <p>Human face ID set. This field is required when Type is delete.</p>
                     * 
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 设置<p>Human face ID set. This field is required when Type is delete.</p>
                     * @param _faceIds <p>Human face ID set. This field is required when Type is delete.</p>
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
                     * 获取<p>Collection of strings after the face image is <a href="https://tools.ietf.org/html/rfc4648">Base64</a>-encoded. Only jpeg and png image formats are supported.</p><li>This field is required when Type is add or reset.</li><li>Array length limit: 5 images.</li>Note: The image must be a relatively clear photo of a single person's front face, with pixels not less than 200*200.
                     * @return FaceContents <p>Collection of strings after the face image is <a href="https://tools.ietf.org/html/rfc4648">Base64</a>-encoded. Only jpeg and png image formats are supported.</p><li>This field is required when Type is add or reset.</li><li>Array length limit: 5 images.</li>Note: The image must be a relatively clear photo of a single person's front face, with pixels not less than 200*200.
                     * 
                     */
                    std::vector<std::string> GetFaceContents() const;

                    /**
                     * 设置<p>Collection of strings after the face image is <a href="https://tools.ietf.org/html/rfc4648">Base64</a>-encoded. Only jpeg and png image formats are supported.</p><li>This field is required when Type is add or reset.</li><li>Array length limit: 5 images.</li>Note: The image must be a relatively clear photo of a single person's front face, with pixels not less than 200*200.
                     * @param _faceContents <p>Collection of strings after the face image is <a href="https://tools.ietf.org/html/rfc4648">Base64</a>-encoded. Only jpeg and png image formats are supported.</p><li>This field is required when Type is add or reset.</li><li>Array length limit: 5 images.</li>Note: The image must be a relatively clear photo of a single person's front face, with pixels not less than 200*200.
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
                     * <p>Operation type. Available values: add, delete, reset. The reset operation will clear the existing face data of the person and add the face data specified by FaceContents.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Human face ID set. This field is required when Type is delete.</p>
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                    /**
                     * <p>Collection of strings after the face image is <a href="https://tools.ietf.org/html/rfc4648">Base64</a>-encoded. Only jpeg and png image formats are supported.</p><li>This field is required when Type is add or reset.</li><li>Array length limit: 5 images.</li>Note: The image must be a relatively clear photo of a single person's front face, with pixels not less than 200*200.
                     */
                    std::vector<std::string> m_faceContents;
                    bool m_faceContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFACEOPERATION_H_
