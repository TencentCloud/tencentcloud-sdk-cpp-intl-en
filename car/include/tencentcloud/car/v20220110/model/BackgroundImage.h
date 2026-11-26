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
                     * 获取ID of the COS file.
                     * @return COSFileId ID of the COS file.
                     * 
                     */
                    std::string GetCOSFileId() const;

                    /**
                     * 设置ID of the COS file.
                     * @param _cOSFileId ID of the COS file.
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
                     * 获取Download URL.
                     * @return URL Download URL.
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Download URL.
                     * @param _uRL Download URL.
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
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Creation Time
                     * @return CreateTime Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Time
                     * @param _createTime Creation Time
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
                     * ID of the COS file.
                     */
                    std::string m_cOSFileId;
                    bool m_cOSFileIdHasBeenSet;

                    /**
                     * Download URL.
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_BACKGROUNDIMAGE_H_
