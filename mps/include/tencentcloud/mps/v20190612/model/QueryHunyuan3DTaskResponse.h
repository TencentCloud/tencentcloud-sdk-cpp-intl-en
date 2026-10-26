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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/File3D.h>
#include <tencentcloud/mps/v20190612/model/ViewImage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * QueryHunyuan3DTask response structure.
                */
                class QueryHunyuan3DTaskResponse : public AbstractModel
                {
                public:
                    QueryHunyuan3DTaskResponse();
                    ~QueryHunyuan3DTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task status</p><p>Enumeration values: </p><ul><li>WAIT: Queued, waiting to execute</li><li>RUN: In progress</li><li>DONE: Successfully completed, ResultFile3Ds has a value</li><li>FAIL: Failed, ErrorCode / ErrorMessage has a value</li></ul>
                     * @return Status <p>Task status</p><p>Enumeration values: </p><ul><li>WAIT: Queued, waiting to execute</li><li>RUN: In progress</li><li>DONE: Successfully completed, ResultFile3Ds has a value</li><li>FAIL: Failed, ErrorCode / ErrorMessage has a value</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Progress percentage, 0-100. 0 if unknown; should be 100 when DONE; retains the last known value on FAIL</p>
                     * @return Progress <p>Progress percentage, 0-100. 0 if unknown; should be 100 when DONE; retains the last known value on FAIL</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Only available when Status=FAIL. String error code (for example, InternalError.ModelInference)</p>
                     * @return ErrorCode <p>Only available when Status=FAIL. String error code (for example, InternalError.ModelInference)</p>
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>Only has a value when Status=FAIL, detailed copywriting</p>
                     * @return ErrorMessage <p>Only has a value when Status=FAIL, detailed copywriting</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>Only has a value when Status=DONE. List of output files</p>
                     * @return ResultFile3Ds <p>Only has a value when Status=DONE. List of output files</p>
                     * 
                     */
                    std::vector<File3D> GetResultFile3Ds() const;

                    /**
                     * 判断参数 ResultFile3Ds 是否已赋值
                     * @return ResultFile3Ds 是否已赋值
                     * 
                     */
                    bool ResultFile3DsHasBeenSet() const;

                    /**
                     * 获取<p>Task ID</p>
                     * @return TaskId <p>Task ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task type</p><p>Enumeration values:</p><ul><li>text_to_3d: Text to 3D</li><li>image_to_3d: Image to 3D</li><li>multiview_to_3d: Multi-view to 3D</li><li>mesh_to_texture: Mesh to texture</li><li>mesh_to_geometry: Mesh to geometry</li></ul>
                     * @return TaskType <p>Task type</p><p>Enumeration values:</p><ul><li>text_to_3d: Text to 3D</li><li>image_to_3d: Image to 3D</li><li>multiview_to_3d: Multi-view to 3D</li><li>mesh_to_texture: Mesh to texture</li><li>mesh_to_geometry: Mesh to geometry</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Input prompt</p>
                     * @return Prompt <p>Input prompt</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>Image URL input in image-to-3D scenarios</p>
                     * @return RefImage <p>Image URL input in image-to-3D scenarios</p>
                     * 
                     */
                    std::string GetRefImage() const;

                    /**
                     * 判断参数 RefImage 是否已赋值
                     * @return RefImage 是否已赋值
                     * 
                     */
                    bool RefImageHasBeenSet() const;

                    /**
                     * 获取<p>Image information input in multi-image to 3D scenarios</p>
                     * @return MultiViewImages <p>Image information input in multi-image to 3D scenarios</p>
                     * 
                     */
                    std::vector<ViewImage> GetMultiViewImages() const;

                    /**
                     * 判断参数 MultiViewImages 是否已赋值
                     * @return MultiViewImages 是否已赋值
                     * 
                     */
                    bool MultiViewImagesHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time</p>
                     * @return CreateTime <p>Task creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task update time</p>
                     * @return UpdateTime <p>Task update time</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>The target face count for the submitted task</p>
                     * @return FaceCount <p>The target face count for the submitted task</p>
                     * 
                     */
                    uint64_t GetFaceCount() const;

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取<p>Generation type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only geometry (no texture, faster output speed)</li><li>Texture: Generate only texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     * @return GenerateType <p>Generation type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only geometry (no texture, faster output speed)</li><li>Texture: Generate only texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task position in the queue; the smaller the value, the higher the priority.</p>
                     * @return QueuePosition <p>Task position in the queue; the smaller the value, the higher the priority.</p>
                     * 
                     */
                    int64_t GetQueuePosition() const;

                    /**
                     * 判断参数 QueuePosition 是否已赋值
                     * @return QueuePosition 是否已赋值
                     * 
                     */
                    bool QueuePositionHasBeenSet() const;

                private:

                    /**
                     * <p>Task status</p><p>Enumeration values: </p><ul><li>WAIT: Queued, waiting to execute</li><li>RUN: In progress</li><li>DONE: Successfully completed, ResultFile3Ds has a value</li><li>FAIL: Failed, ErrorCode / ErrorMessage has a value</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Progress percentage, 0-100. 0 if unknown; should be 100 when DONE; retains the last known value on FAIL</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Only available when Status=FAIL. String error code (for example, InternalError.ModelInference)</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>Only has a value when Status=FAIL, detailed copywriting</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>Only has a value when Status=DONE. List of output files</p>
                     */
                    std::vector<File3D> m_resultFile3Ds;
                    bool m_resultFile3DsHasBeenSet;

                    /**
                     * <p>Task ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task type</p><p>Enumeration values:</p><ul><li>text_to_3d: Text to 3D</li><li>image_to_3d: Image to 3D</li><li>multiview_to_3d: Multi-view to 3D</li><li>mesh_to_texture: Mesh to texture</li><li>mesh_to_geometry: Mesh to geometry</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Input prompt</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Image URL input in image-to-3D scenarios</p>
                     */
                    std::string m_refImage;
                    bool m_refImageHasBeenSet;

                    /**
                     * <p>Image information input in multi-image to 3D scenarios</p>
                     */
                    std::vector<ViewImage> m_multiViewImages;
                    bool m_multiViewImagesHasBeenSet;

                    /**
                     * <p>Task creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task update time</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>The target face count for the submitted task</p>
                     */
                    uint64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * <p>Generation type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only geometry (no texture, faster output speed)</li><li>Texture: Generate only texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>Task position in the queue; the smaller the value, the higher the priority.</p>
                     */
                    int64_t m_queuePosition;
                    bool m_queuePositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUERYHUNYUAN3DTASKRESPONSE_H_
