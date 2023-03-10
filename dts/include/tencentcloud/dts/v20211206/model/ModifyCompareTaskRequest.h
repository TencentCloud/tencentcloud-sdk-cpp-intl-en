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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareObject.h>
#include <tencentcloud/dts/v20211206/model/CompareOptions.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyCompareTask request structure.
                */
                class ModifyCompareTaskRequest : public AbstractModel
                {
                public:
                    ModifyCompareTaskRequest();
                    ~ModifyCompareTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return JobId Task ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID
                     * @param JobId Task ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`
                     * @return CompareTaskId Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`
                     * @param CompareTaskId Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取Task name
                     * @return TaskName Task name
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
                     * @param TaskName Task name
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Data comparison object mode. Valid values: `sameAsMigrate` (All migration objects), `custom` (Custom mode. The custom comparison objects must be a subset of the migration objects). Default value: `sameAsMigrate`.
                     * @return ObjectMode Data comparison object mode. Valid values: `sameAsMigrate` (All migration objects), `custom` (Custom mode. The custom comparison objects must be a subset of the migration objects). Default value: `sameAsMigrate`.
                     */
                    std::string GetObjectMode() const;

                    /**
                     * 设置Data comparison object mode. Valid values: `sameAsMigrate` (All migration objects), `custom` (Custom mode. The custom comparison objects must be a subset of the migration objects). Default value: `sameAsMigrate`.
                     * @param ObjectMode Data comparison object mode. Valid values: `sameAsMigrate` (All migration objects), `custom` (Custom mode. The custom comparison objects must be a subset of the migration objects). Default value: `sameAsMigrate`.
                     */
                    void SetObjectMode(const std::string& _objectMode);

                    /**
                     * 判断参数 ObjectMode 是否已赋值
                     * @return ObjectMode 是否已赋值
                     */
                    bool ObjectModeHasBeenSet() const;

                    /**
                     * 获取Compared object, which is required if `CompareObjectMode` is `custom`.
                     * @return Objects Compared object, which is required if `CompareObjectMode` is `custom`.
                     */
                    CompareObject GetObjects() const;

                    /**
                     * 设置Compared object, which is required if `CompareObjectMode` is `custom`.
                     * @param Objects Compared object, which is required if `CompareObjectMode` is `custom`.
                     */
                    void SetObjects(const CompareObject& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Consistency check options
                     * @return Options Consistency check options
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置Consistency check options
                     * @param Options Consistency check options
                     */
                    void SetOptions(const CompareOptions& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Data consistency check task ID in the format of `dts-8yv4w2i1-cmp-37skmii9`
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Data comparison object mode. Valid values: `sameAsMigrate` (All migration objects), `custom` (Custom mode. The custom comparison objects must be a subset of the migration objects). Default value: `sameAsMigrate`.
                     */
                    std::string m_objectMode;
                    bool m_objectModeHasBeenSet;

                    /**
                     * Compared object, which is required if `CompareObjectMode` is `custom`.
                     */
                    CompareObject m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Consistency check options
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKREQUEST_H_
