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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICCONFIGLABEL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICCONFIGLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AppointLabel.h>
#include <tencentcloud/cls/v20201016/model/CustomLabel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Configuration information of a metric collection label.
                */
                class MetricConfigLabel : public AbstractModel
                {
                public:
                    MetricConfigLabel();
                    ~MetricConfigLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metadata.
support
- `namespace`
- `pod_name`
- `pod_ip`
- `pod_uid`
- `container_name`
- `container_id`
- `image_name`
- `cluster_id`
- `node_id`
- `node_ip`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Metadata Metadata.
support
- `namespace`
- `pod_name`
- `pod_ip`
- `pod_uid`
- `container_name`
- `container_id`
- `image_name`
- `cluster_id`
- `node_id`
- `node_ip`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置Metadata.
support
- `namespace`
- `pod_name`
- `pod_ip`
- `pod_uid`
- `container_name`
- `container_id`
- `image_name`
- `cluster_id`
- `node_id`
- `node_ip`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metadata Metadata.
support
- `namespace`
- `pod_name`
- `pod_ip`
- `pod_uid`
- `container_name`
- `container_id`
- `image_name`
- `cluster_id`
- `node_id`
- `node_ip`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetadata(const std::vector<std::string>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取Metadata Pod label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Label Metadata Pod label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AppointLabel GetLabel() const;

                    /**
                     * 设置Metadata Pod label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _label Metadata Pod label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabel(const AppointLabel& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Custom label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomLabels Custom label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CustomLabel> GetCustomLabels() const;

                    /**
                     * 设置Custom label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customLabels Custom label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomLabels(const std::vector<CustomLabel>& _customLabels);

                    /**
                     * 判断参数 CustomLabels 是否已赋值
                     * @return CustomLabels 是否已赋值
                     * 
                     */
                    bool CustomLabelsHasBeenSet() const;

                private:

                    /**
                     * Metadata.
support
- `namespace`
- `pod_name`
- `pod_ip`
- `pod_uid`
- `container_name`
- `container_id`
- `image_name`
- `cluster_id`
- `node_id`
- `node_ip`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * Metadata Pod label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AppointLabel m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Custom label information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CustomLabel> m_customLabels;
                    bool m_customLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICCONFIGLABEL_H_
