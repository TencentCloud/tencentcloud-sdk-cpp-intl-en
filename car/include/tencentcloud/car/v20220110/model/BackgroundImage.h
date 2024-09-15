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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_BACKGROUNDIMAGE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_BACKGROUNDIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Background image information.
                */
                class BackgroundImage : public AbstractModel
                {
                public:
                    BackgroundImage();
                    ~BackgroundImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the COS file.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return COSFileId ID of the COS file.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCOSFileId() const;

                    /**
                     * 设置ID of the COS file.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cOSFileId ID of the COS file.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCOSFileId(const std::string& _cOSFileId);

                    /**
                     * 判断参数 COSFileId 是否已赋值
                     * @return COSFileId 是否已赋值
                     * 
                     */
                    bool COSFileIdHasBeenSet() const;

                    /**
                     * 获取Download URL.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return URL Download URL.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Download URL.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uRL Download URL.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * ID of the COS file.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cOSFileId;
                    bool m_cOSFileIdHasBeenSet;

                    /**
                     * Download URL.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_BACKGROUNDIMAGE_H_
