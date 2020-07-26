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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Information of a video processing input object.
                */
                class MediaInputInfo : public AbstractModel
                {
                public:
                    MediaInputInfo();
                    ~MediaInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video processing object type. Only COS is supported currently.
                     * @return Type Video processing object type. Only COS is supported currently.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Video processing object type. Only COS is supported currently.
                     * @param Type Video processing object type. Only COS is supported currently.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取This parameter is required and valid when `Type` is `COS`, indicating the information of a COS object for video processing.
                     * @return CosInputInfo This parameter is required and valid when `Type` is `COS`, indicating the information of a COS object for video processing.
                     */
                    CosInputInfo GetCosInputInfo() const;

                    /**
                     * 设置This parameter is required and valid when `Type` is `COS`, indicating the information of a COS object for video processing.
                     * @param CosInputInfo This parameter is required and valid when `Type` is `COS`, indicating the information of a COS object for video processing.
                     */
                    void SetCosInputInfo(const CosInputInfo& _cosInputInfo);

                    /**
                     * 判断参数 CosInputInfo 是否已赋值
                     * @return CosInputInfo 是否已赋值
                     */
                    bool CosInputInfoHasBeenSet() const;

                private:

                    /**
                     * Video processing object type. Only COS is supported currently.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This parameter is required and valid when `Type` is `COS`, indicating the information of a COS object for video processing.
                     */
                    CosInputInfo m_cosInputInfo;
                    bool m_cosInputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAINPUTINFO_H_
