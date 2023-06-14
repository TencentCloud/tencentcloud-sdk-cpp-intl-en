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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIGNOREVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIGNOREVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Input parameters for adding and unignoring vulnerabilities in the scan
                */
                class ModifyIgnoreVul : public AbstractModel
                {
                public:
                    ModifyIgnoreVul();
                    ~ModifyIgnoreVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取POC ID
                     * @return PocID POC ID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置POC ID
                     * @param _pocID POC ID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取IDs of images to be ignored. If it is not specified, it indicates to ignore all.
                     * @return ImageIDs IDs of images to be ignored. If it is not specified, it indicates to ignore all.
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置IDs of images to be ignored. If it is not specified, it indicates to ignore all.
                     * @param _imageIDs IDs of images to be ignored. If it is not specified, it indicates to ignore all.
                     * 
                     */
                    void SetImageIDs(const std::vector<std::string>& _imageIDs);

                    /**
                     * 判断参数 ImageIDs 是否已赋值
                     * @return ImageIDs 是否已赋值
                     * 
                     */
                    bool ImageIDsHasBeenSet() const;

                    /**
                     * 获取When there is an image
Image type. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * @return ImageType When there is an image
Image type. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置When there is an image
Image type. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * @param _imageType When there is an image
Image type. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                private:

                    /**
                     * POC ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * IDs of images to be ignored. If it is not specified, it indicates to ignore all.
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * When there is an image
Image type. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIGNOREVUL_H_
