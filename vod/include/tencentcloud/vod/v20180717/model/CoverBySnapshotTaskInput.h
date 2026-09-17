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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkInput.h>


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
                class CoverBySnapshotTaskInput : public AbstractModel
                {
                public:
                    CoverBySnapshotTaskInput();
                    ~CoverBySnapshotTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Definition 
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return PositionType 
                     * 
                     */
                    std::string GetPositionType() const;

                    /**
                     * 设置
                     * @param _positionType 
                     * 
                     */
                    void SetPositionType(const std::string& _positionType);

                    /**
                     * 判断参数 PositionType 是否已赋值
                     * @return PositionType 是否已赋值
                     * 
                     */
                    bool PositionTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return PositionValue 
                     * 
                     */
                    double GetPositionValue() const;

                    /**
                     * 设置
                     * @param _positionValue 
                     * 
                     */
                    void SetPositionValue(const double& _positionValue);

                    /**
                     * 判断参数 PositionValue 是否已赋值
                     * @return PositionValue 是否已赋值
                     * 
                     */
                    bool PositionValueHasBeenSet() const;

                    /**
                     * 获取
                     * @return WatermarkSet 
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置
                     * @param _watermarkSet 
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_positionType;
                    bool m_positionTypeHasBeenSet;

                    /**
                     * 
                     */
                    double m_positionValue;
                    bool m_positionValueHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COVERBYSNAPSHOTTASKINPUT_H_
