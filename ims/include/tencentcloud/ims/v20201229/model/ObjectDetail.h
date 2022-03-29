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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTDETAIL_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Object detection result details. When the detection scenario is an object, advertising logo, or QR code, it represents the tag name, tag value, tag score, and position information of the model detection frame.
                */
                class ObjectDetail : public AbstractModel
                {
                public:
                    ObjectDetail();
                    ~ObjectDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This parameter is used to return the ID of the recognized object for easier recognition and distinction.
                     * @return Id This parameter is used to return the ID of the recognized object for easier recognition and distinction.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置This parameter is used to return the ID of the recognized object for easier recognition and distinction.
                     * @param Id This parameter is used to return the ID of the recognized object for easier recognition and distinction.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the hit object tag.
                     * @return Name This parameter is used to return the hit object tag.
                     */
                    std::string GetName() const;

                    /**
                     * 设置This parameter is used to return the hit object tag.
                     * @param Name This parameter is used to return the hit object tag.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the value or content of the object tag; for example, when the tag is *QR code (QrCode)*, this field will be the URL of the recognized QR code.
                     * @return Value This parameter is used to return the value or content of the object tag; for example, when the tag is *QR code (QrCode)*, this field will be the URL of the recognized QR code.
                     */
                    std::string GetValue() const;

                    /**
                     * 设置This parameter is used to return the value or content of the object tag; for example, when the tag is *QR code (QrCode)*, this field will be the URL of the recognized QR code.
                     * @param Value This parameter is used to return the value or content of the object tag; for example, when the tag is *QR code (QrCode)*, this field will be the URL of the recognized QR code.
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the hit score of the object tag. Valid values: **0–100**; for example, *QrCode 99* indicates that it is highly likely that the recognized content will hit the QR code tag.
                     * @return Score This parameter is used to return the hit score of the object tag. Valid values: **0–100**; for example, *QrCode 99* indicates that it is highly likely that the recognized content will hit the QR code tag.
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置This parameter is used to return the hit score of the object tag. Valid values: **0–100**; for example, *QrCode 99* indicates that it is highly likely that the recognized content will hit the QR code tag.
                     * @param Score This parameter is used to return the hit score of the object tag. Valid values: **0–100**; for example, *QrCode 99* indicates that it is highly likely that the recognized content will hit the QR code tag.
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the coordinate position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the object detection frame for quick location of the object information.
                     * @return Location This field is used to return the coordinate position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the object detection frame for quick location of the object information.
                     */
                    Location GetLocation() const;

                    /**
                     * 设置This field is used to return the coordinate position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the object detection frame for quick location of the object information.
                     * @param Location This field is used to return the coordinate position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the object detection frame for quick location of the object information.
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the hit object subtag.
                     * @return SubLabel This parameter is used to return the hit object subtag.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This parameter is used to return the hit object subtag.
                     * @param SubLabel This parameter is used to return the hit object subtag.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                private:

                    /**
                     * This parameter is used to return the ID of the recognized object for easier recognition and distinction.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * This parameter is used to return the hit object tag.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * This parameter is used to return the value or content of the object tag; for example, when the tag is *QR code (QrCode)*, this field will be the URL of the recognized QR code.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * This parameter is used to return the hit score of the object tag. Valid values: **0–100**; for example, *QrCode 99* indicates that it is highly likely that the recognized content will hit the QR code tag.
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the coordinate position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the object detection frame for quick location of the object information.
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * This parameter is used to return the hit object subtag.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTDETAIL_H_
